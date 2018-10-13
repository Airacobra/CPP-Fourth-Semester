#pragma once
#include <iostream>

class Kwadrat : public Ksztalt
{
public:
	Kwadrat(const int len)
	{
		k_a = len;
	}

	std::string operator<<(Ksztalt &K) const
	{
		std::string s;
		s << "Kwadrat o boku "<<k_a<<std::endl;
		return s.str();
	}

	// friend std::ostream & operator<< (std::ostream &output, const Kwadrat &K)
	// {
	// 	return output << "Kwadrat o boku "<<K.k_a<<std::endl;
	// }

private:	
	int k_a;
	
};