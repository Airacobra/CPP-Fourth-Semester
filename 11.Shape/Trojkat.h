#pragma once
#include <iostream>

class Trojkat : public Ksztalt
{
public:
	Trojkat(const int a, const int b, const int c)
	{
		t_a = a;
		t_b = b;
		t_c = c;
	}

	std::string operator<<(Ksztalt &K) const
	{
		std::string s;
		s << "Trojkat o bokach "<<t_a<<" "<<t_b<<" "<<t_c<<std::endl;
		return s.str();
	}

	// friend std::ostream & operator<< (std::ostream &output, const Trojkat &T)
	// {
	// 	return output << "Trojkat o bokach "<<T.t_a<<" "<<T.t_b<<" "<<T.t_c<<std::endl;
	// }

private:
	int t_a, t_b, t_c;	
};