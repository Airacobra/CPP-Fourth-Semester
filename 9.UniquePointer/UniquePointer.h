#pragma once
#include <string>
#include <iostream>

template <typename T>
class UniquePointer
{
public:
	UniquePointer(T * p):
	u_pointer(p){}

	UniquePointer(const UniquePointer<T>&p):u_pointer(p.getter())
	{

	}

	UniquePointer(UniquePointer<T>&p):u_pointer(p.getter())
	{
		p.u_pointer = NULL;
	}

	T operator *()
	{
		return *u_pointer;
	}

	operator T*()
	{
		return u_pointer;
	}

	// UniquePointer operator=(const UniquePointer & p)
	// {
	// 	if(p.getter() != u_pointer)
	// 	{
	// 		u_pointer = p.getter();
	// 		//p.setToNULL();
	// 		return p;
	// 	}
	// 	else
	// 	{
	// 		return p;
	// 	}
	// } 

	friend std::ostream& operator <<(std::ostream &output, UniquePointer& ptr)
	{
		return output<<"[pointing to adress"<<ptr.u_pointer<<"]";
	}

	T* getter() const 
	{
		return u_pointer;
	} 

	void setToNULL()
	{
		u_pointer = NULL;
	}

	~UniquePointer()
	{
		u_pointer = NULL;
	}

private:
	T *u_pointer;
};