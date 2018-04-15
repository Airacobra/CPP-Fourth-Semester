#include "Romet.h"

std::ostream& operator <<(std::ostream &wyjscie, const Romet &r)
{
	wyjscie<<"\nLiczba kol "<< r.MOTOROWER_kola<<"\n";
	wyjscie<<"Stan licznika "<< r.POJAZD_przebieg<<" [km]\n";
	wyjscie<<"Kolor "<<r.POJAZD_kolor<<"\n";
	return wyjscie;
}