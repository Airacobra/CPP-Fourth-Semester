#pragma once

#include "Pomieszczenie.h"

//szablon w przypadku kiedy przekazujemy wskaznik na stala funkcje, a lokaj wykonuja prace
template <void (Pomieszczenie::* T)() const>
void Lokaj(Pomieszczenie &miejsce)
{
	(miejsce.*T)();
}

//szablon w przypadku kiedy przekazujemy wskaznik na stala funkcje, a pomieszczenie jest zamnkeniete
template <void (Pomieszczenie::* T)() const> 
void Lokaj(const Pomieszczenie &miejsce)
{
	std::cout<<"Pomieszczenie "<<miejsce.PodajNazwePomieszczenia()<<" jest zamkniete"<<std::endl;
}

//szablon w przypadku wstawie Null do parametru szablonu, wtedy lokaj nic nie robi
template <int i>
void Lokaj(const Pomieszczenie &miejsce)
{
	std::cout<<"Nic nie robie."<<std::endl;
}


