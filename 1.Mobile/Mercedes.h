#pragma once
#include "Samochod.h"

//klasa repzrentujaca mercedesa, dziedziczy po samochodzie, wszystkie paramtery
//zapisuje za pomoca klas z ktorych dziedziczy
class Mercedes : public Samochod
{
public:
	//konstruktor domyslny
	Mercedes(){}

	//konstruktor, przekazuje dodatkowa inforamcje o kolorze
	Mercedes(const Silnik &silnik, const float &przebieg):
	Samochod(silnik,"czarny metalic", przebieg){}

	//konstruktor kopiujacy, przepisuje parametry oprocz przebiegu 
	Mercedes(const Mercedes &m)
	{
	SAMOCHOD_kola = m.SAMOCHOD_kola;
	POJAZD_kolor = m.POJAZD_kolor;
	POJAZD_przebieg = 0;
	}

	//sluzy do zamiany przebiegu w mercedesie
	void Przebieg(const int cyferki);

	//przeciazanie operatora << do wypisania informacji na ekran
	friend std::ostream& operator <<(std::ostream &wyjscie, const Mercedes &m);
};






