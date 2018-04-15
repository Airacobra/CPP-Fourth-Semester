#pragma once
#include "Silnik.h"
#include "Pojazd.h"

//klasa samochod, bazowa dla mercedesa, przechowuje info o liczbie kol
//korzysta z klas silnik i pojazd
class Samochod : public Silnik, public Pojazd
{
public:
	//konstruktor domyslny
	Samochod(){}
	//konstruktor, ktory przekazuje silnik, kolor i przebieg do klas z ktorych
	//dziedzyiczy
	Samochod(const Silnik & s, const std::string kolor, const float przebieg):
	Silnik(s),Pojazd(kolor,przebieg){ SAMOCHOD_kola = 4;}

	//przeciazanie operatora << do wypisania informacji na ekran
	friend std::ostream& operator <<(std::ostream &wyjscie, const Samochod &s);

protected:
	int SAMOCHOD_kola;	
	
};



