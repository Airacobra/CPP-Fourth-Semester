#pragma once
#include <iostream>

class Kolo : public Ksztalt
{
public:
	Kolo(const int r)
	{
		radius = r; 
	}

	std::string operator<<(Ksztalt &K) const
	{
		std::string s;
		s << "Kolo o promieniu "<<radius<<std::endl;
		return s.str();
	}

	// friend std::ostream & operator<< (std::ostream &output, const Kolo &K)
	// {
	// 	return output << "Kolo o promieniu "<<K.radius<<std::endl;
	// }

private:	
	int radius;
};