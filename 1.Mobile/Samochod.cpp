#include "Samochod.h"

std::ostream& operator <<(std::ostream &wyjscie, const Samochod &s)
{
	wyjscie<<"\nLiczba kol "<< s.SAMOCHOD_kola<<"\n";
	wyjscie<<"Stan licznika "<< s.POJAZD_przebieg<<" [km]\n";
	wyjscie<<"Kolor "<<s.POJAZD_kolor<<"\n";
	return wyjscie;
}