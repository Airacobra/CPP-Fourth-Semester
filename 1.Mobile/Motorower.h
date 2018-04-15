#pragma once
#include "Silnik.h"
#include "Pojazd.h"

//klasa motorower, bazowa dla rometa, przechowuje info o liczbie kol
//korzysta z klas silnik i pojazd
class Motorower : public Silnik, public Pojazd
{
public:
	//konstruktor domyslny
	Motorower();
	//konstruktor ten przekazuje silnik, kolor i przebieg do klas bazowych
	Motorower(const Silnik s, const std::string kolor, const float przebieg):
	Silnik(s),Pojazd(kolor,przebieg){ MOTOROWER_kola = 2;}

	//przeciazanie operatora << do wypisania informacji na ekran
	friend std::ostream& operator <<(std::ostream &wyjscie, const Motorower &mt);

protected:
	int MOTOROWER_kola;		
};