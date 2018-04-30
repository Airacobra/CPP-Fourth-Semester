#pragma once

#include <cstdlib>
#include "MyClass.h"
#include "MyException.h"

int ReturnValueID;

void MyTerminate()
{
	std::cout<<"--- UWAGA: blad mechanizmu wyjatkow ---"<<std::endl;
	abort();
}

void Fold3(MyClass m_class)
{
	m_class.setString("F3");
	std::cout<<"Entering Fold level 3"<<std::endl;

	try{
		if(ReturnValueID == 0)
		{
			throw 9.242f; 
		}
		else if(ReturnValueID == 1)
		{
			throw -87; 
		} 
		else if(ReturnValueID == 2)
		{
			throw 16u;
		} 
		else if(ReturnValueID == 3)
		{
			throw 3.14157;
		}
	} 

	catch (double float_exc)
	{
		std::cout<<"Caught an exception of type: float"<<std::endl;
	} 
	catch (unsigned int float_exc)
	{
		std::cout<<"Caught an exception of type: uns int"<<std::endl;
	} 
	catch (int float_exc)
	{
		std::cout<<"Caught an exception of type: int"<<std::endl;
	} 
	catch (float float_exc)
	{
		std::cout<<"Caught an exception of type: float"<<std::endl;
	}

	MyException e;
	throw e;
}

void Fold2(MyClass m_class)
{
	m_class.setString("F2");
	std::cout<<"Entering Fold level 2"<<std::endl;
	Fold3(m_class);
}

void Fold1(MyClass *m_class)
{
	std::set_terminate(MyTerminate);

	MyClass copyClass(*m_class);
	copyClass.setString("F1");
	std::cout<<"Entering Fold level 1"<<std::endl;
	Fold2(copyClass);
}