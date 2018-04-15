#include "Motorower.h"

std::ostream& operator <<(std::ostream &wyjscie, const Motorower &mt)
{
	wyjscie<<"\nLiczba kol "<< mt.MOTOROWER_kola<<"\n";
	wyjscie<<"Stan licznika "<< mt.POJAZD_przebieg<<" [km]\n";
	wyjscie<<"Kolor "<<mt.POJAZD_kolor<<"\n";
	return wyjscie;
}