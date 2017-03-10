// Event.h
//------------------------------------------------------------------------------
#pragma once
#ifndef FOUNDATION_PATTERN_EVENT_H
#define FOUNDATION_PATTERN_EVENT_H

// Include
//------------------------------------------------------------------------------
#include "Foundation/Platform/Types.h"
#include "Foundation/Memory/Allocator.h"
#include "Foundation/Memory/Mem.h"


// Macros
//------------------------------------------------------------------------------
#define DELEGATE_DEFAULT_SIZE 16


// DelegateStorage
//------------------------------------------------------------------------------
template<int32 SIZE>
class DelegateStorage
{
public:
	DelegateStorage()
		: m_Mem(nullptr)
		, m_Size(0)
	{}

	DelegateStorage(const DelegateStorage & rOther)
		: m_Mem(nullptr)
		, m_Size(rOther.m_Size)
	{
		if (m_Size > 0)
		{
			m_Mem = m_Allocator.Allocate(m_Size);
			MemCopy(m_Mem, rOther.m_Mem, m_Size);
		}
	}

	DelegateStorage(DelegateStorage&& rOther)
		: m_Mem(nullptr)
		, m_Size(rOther.m_Size)
	{
		if (m_Size > 0 && rOther.IsStackMem())
		{
			m_Mem = m_Allocator.Allocate(m_Size);
			MemCopy(m_Mem, rOther.m_Mem, m_Size);
		}
		else
		{
			m_Mem = rOther.m_Mem;
			m_Size = rOther.m_Size;
			rOther.m_Mem = nullptr;
		}
	}

	~DelegateStorage() { if (m_Mem) m_Allocator.Free(m_Mem); }

	void * GetStorage() const { return m_Mem; }
	void * SetStorage(SIZET size) 
	{
		if (m_Mem)
		{
			m_Allocator.Free(m_Mem);
		}

		if (size > 0)
		{
			m_Mem = m_Allocator.Allocate(size); 
		}
		else
		{
			m_Mem = nullptr;
		}
		m_Size = size;

		return m_Mem;
	}

	bool IsStackMem() { return m_Allocator.IsInStack(m_Mem); }

private:
	StackAllocator<SIZE> m_Allocator;
	void * m_Mem;
	SIZET  m_Size;
};


// Delegate
//------------------------------------------------------------------------------
template<typename T>
class Delegate;

template<typename T, typename... Args>
class Delegate<T(Args...)>
{
public:
	class IFunction
	{
	public:
		virtual ~IFunction() {};
		virtual void Destroy() = 0;
		virtual T Invoke(Args... args) const = 0;
		static void * operator new(SIZET size, DelegateStorage<DELEGATE_DEFAULT_SIZE>* storage)
		{
			return storage->SetStorage(size);
		}
		static void operator delete(void * mem, DelegateStorage<DELEGATE_DEFAULT_SIZE>* storage) {}
	};

	class StaticFunction : public IFunction
	{
	public:
		typedef T(*StaticFunctionPtr)(Args...);
		StaticFunction(const StaticFunctionPtr function)
			: m_Function(function)
		{}
		virtual ~StaticFunction() {};
		virtual void Destroy() { this->~StaticFunction(); };

		T Invoke(Args... args) const { m_Function(args...); }
	private:
		StaticFunctionPtr m_Function;
	};

	template<class C>
	class MethodFunction : public IFunction
	{
	public:
		typedef C* InstancePtr;
		typedef T(C::*MemberFunctionPtr)(Args...);
		MethodFunction(InstancePtr instance, MemberFunctionPtr method)
			: m_Method(method)
		{}
		virtual ~MethodFunction() {};
		virtual void Destroy() { this->~MethodFunction(); };

		T Invoke(Args... args) const { (m_Instance->*m_Method)(args...); }
	private:
		InstancePtr			m_Instance;
		MemberFunctionPtr	m_Method;
	};

	template<class Functor>
	class LambdaFunction : public IFunction
	{
	public:
		LambdaFunction(const Functor & functor)
			: m_Functor(functor)
		{}
		virtual ~LambdaFunction() {};
		virtual void Destroy() { this->~LambdaFunction(); };

		T Invoke(Args... args) const { m_Functor(args...); }
	private:
		Functor m_Functor;
	};


	Delegate() = default;
	~Delegate() { Unbind(); }

	void BindFunction(typename StaticFunction::StaticFunctionPtr function)
	{
		Unbind();
		INPLACE_NEW(&m_Storage) StaticFunction(function);
	}

	template<class C>
	void BindMethod(C* c, T(C::* method)(Args...))
	{
		Unbind();
		INPLACE_NEW(&m_Storage) MethodFunction<C>(c, method);
	}

	template<class Functor>
	void BindLambda(const Functor & function)
	{
		Unbind();
		INPLACE_NEW(&m_Storage) LambdaFunction<Functor>(function);
	}

	void Unbind()
	{
		if (IsValid())
		{
			reinterpret_cast<IFunction*>(m_Storage.GetStorage())->Destroy();
			m_Storage.SetStorage(0);
		}
	}

	bool IsValid() const
	{
		return m_Storage.GetStorage() != nullptr;
	}

	T Invoke(Args... args) const
	{
		ASSERT(IsValid());
		reinterpret_cast<IFunction*>(m_Storage.GetStorage())->Invoke(args...);
	}

	bool operator == (const Delegate & rOther)
	{
		return 
	}

private:
	DelegateStorage<DELEGATE_DEFAULT_SIZE> m_Storage;
};


// Event
//-----------------------------------------------------------------------------
#include "Foundation/Pattern/Event.inl"

template<typename T>
class Event;

template<typename T, typename... Args>
class Event<T(Args...)>
{
public:
	uint64 Bind(const Delegate & d) { return m_Impl->Bind(d); }
	void   Unbind(uint64 id) { m_Impl->Unbind(id); }

	void SetOrderSensitive(bool orderSensitive) { m_Impl->SetOrderSensitive(orderSensitive); }

	void Signal(Args... args) const { m_Impl->Signal(args...); }

private:
	StrongPtr<EventImpl<T(Args...)>> m_Impl;
};


// Signature
//-----------------------------------------------------------------------------
template<typename T>
class Signature;

template<typename T, typename... Args>
class Signature<T(Args...)>
{
public:
	typedef Delegate<T(Args...)> Delegate;
};

//------------------------------------------------------------------------------
#endif // FOUNDATION_PATTERN_EVENT_H