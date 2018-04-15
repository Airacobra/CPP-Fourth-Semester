#pragma once

//klasa dziedziczy po urzdzeniu, zawiera obiekt klasy rozdzielczosc, przekazuje nazwe do urzadzenia, u siebie 
//przechowuje wymiar, zawiera virtualno metode, ze wzgledu na klase wielofunkcyjnosc
//dodatko dziedziczy po papierozernosci, tak aby program nie wypisywal null ptr

#include "Urzadzenie.h" 
#include "Papierozerne.h"

class Drukarka : public virtual Urzadzenie, public virtual Papierozerne
{

public:
	Drukarka(const Rozdzielczosc &R):
	Urzadzenie("Drukarka"), r_rozdzielczosc(R){};

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

	~Drukarka(){};

protected:

private:	
	Rozdzielczosc r_rozdzielczosc;
};