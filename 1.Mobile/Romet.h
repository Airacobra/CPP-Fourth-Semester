#pragma once
#include "Motorower.h"

//klasa repzrentujaca rometa, dziedziczy po motorowerze, wszystkie paramtery
//zapisuje za pomoca klas z ktorych dziedziczy
class Romet : public Motorower
{
public:
	//konstruktor domyslny
	Romet(){}

	//kosntruktor, ktory przekazuje silnik jak i przebieg
	//do klasy z ktorej dziedziczy, dodatkowo zapisuje kolor
	//dany w zadaniu
	Romet(const Silnik &silnik, const float &przebieg):
	Motorower(silnik,"czerwony metalic", przebieg){}

	//przeciazanie operatora << do wypisania informacji na ekran
	friend std::ostream& operator <<(std::ostream &wyjscie, const Romet &r);

};