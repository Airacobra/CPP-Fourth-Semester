#pragma once

//klasa dziedziczy po urzdzeniu, zawiera obiekt klasy rozdzielczosc, przekazuje nazwe do urzadzenia, u siebie 
//przechowuje wymiar, zawiera virtualno metode, ze wzgledu na klase wielofunkcyjnosc

#include "Urzadzenie.h" 

class Skaner : public virtual Urzadzenie
{

public:
	Skaner(const Rozdzielczosc &R):
	Urzadzenie("Skaner"), r_rozdzielczosc(R){};

	virtual std::string rodzaj() const
	{
		return u_nazwa;
	};

	std::string rozdzielczosc() const
	{
		return std::to_string(r_rozdzielczosc.GetSz()) 
			   +"x"+ 
			   std::to_string(r_rozdzielczosc.GetWys());
	};

	~Skaner(){};

protected:

private:	
	Rozdzielczosc r_rozdzielczosc;
};