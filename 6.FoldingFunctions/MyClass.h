#pragma once 

#include <string.h>
#include <iostream>

class MyClass
{
public:
	MyClass(std::string str):m_string(str)
	{
		std::cout<<"Created MyClass: "<< m_string <<std::endl;
	}

	MyClass(const MyClass &m_class):m_string(m_class.m_string)
	{
		std::cout<<"Copy created MyClass: "<< m_string <<std::endl;
	}

	void setString(std::string str)
	{
		m_string = str;
	}

	~MyClass()
	{
		std::cout<<"Destroyed MyClass: "<< m_string<<std::endl;
	}

protected:
	
private:
	std::string m_string;
};