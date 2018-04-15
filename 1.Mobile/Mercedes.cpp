#include "Mercedes.h"

void Mercedes::Przebieg(const int cyferki)
{
	POJAZD_przebieg = cyferki;
}

std::ostream& operator <<(std::ostream &wyjscie, const Mercedes &m)
{
	wyjscie<<"\nLiczba kol "<< m.SAMOCHOD_kola<<"\n";
	wyjscie<<"Stan licznika "<< m.POJAZD_przebieg<<" [km]\n";
	wyjscie<<"Kolor "<<m.POJAZD_kolor<<"\n";
	return wyjscie;
}