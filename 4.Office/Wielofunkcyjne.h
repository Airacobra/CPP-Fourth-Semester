#pragma once

//klasa ta dziedziczy po trzech urzadzeniach, ma swoja unikatowa nazwe, przekazuje rozdzielczosci do urzadzen, 
//nadpisuje wirtualna metode rodzaj(), nie przechowuje nic 'u siebie'

#include "Skaner.h"
#include "Drukarka.h"
#include "Ksero.h"

class Wielofunkcyjne : public Drukarka, public Ksero, public Skaner
{
public:

	Wielofunkcyjne(const Rozdzielczosc &Roz_1, const Rozdzielczosc &Rroz_2):
	Urzadzenie("Wielofunkcyjne"),Drukarka(Roz_1), Ksero(), Skaner(Rroz_2){};

	std::string rodzaj() const
	{
		return u_nazwa;
	};

	~Wielofunkcyjne(){};
	
};
