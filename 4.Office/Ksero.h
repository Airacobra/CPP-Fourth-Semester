#pragma once

//klasa dziedziczy po urzdzeniu, zawiera obiekt klasy rozdzielczosc, przekazuje nazwe do urzadzenia, u siebie 
//przechowuje wymiar, zawiera virtualno metode, ze wzgledu na klase wielofunkcyjnosc
//dodatko dziedziczy po papierozernosci, tak aby program nie wypisywal null ptr
//zawiera rowniaz konstrukor przekazujacy wielkosci 0,0 jako wymiar, gdzy nigdzie w main.cpp nie potrzebny jest ten wymiar

#include "Urzadzenie.h" 
#include "Papierozerne.h"

class Ksero : public virtual Urzadzenie, public virtual Papierozerne
{

public:
	Ksero(): Urzadzenie("Ksero"), r_rozdzielczosc(0,0){};

	Ksero(const Rozdzielczosc &R):
	Urzadzenie("Ksero"), r_rozdzielczosc(R){};

	virtual std::string rodzaj() const
	{
		return u_nazwa;
	};

	~Ksero(){};

protected:

private:	
	Rozdzielczosc r_rozdzielczosc;
};