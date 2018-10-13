#pragma once
#include <iostream>

class Ksztalt
{
public:
	static int howMany;

	virtual std::string operator <<(Ksztalt &K) const = 0;
	friend std::ostream & operator<< (std::ostream &output, Ksztalt *K);
	friend std::ostream & operator<< (std::ostream &output, Ksztalt **K);
};

std::ostream & operator <<(std::ostream &output, Ksztalt *K) 
{
	output<<K->operator<<(*K);
	return output;
}

std::ostream & operator <<(std::ostream &output, Ksztalt **K)
{
 	for(int i = 0; K[i] != NULL; i++)
	{
		output<<K[i]->operator<<(*(K[i]));
	}
 	return output;
}

int Ksztalt::howMany = 0;