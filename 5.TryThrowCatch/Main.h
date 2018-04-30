#pragma once

// jeden plik zawiera wszystkie klasy, gdyz jak sadzilem na poczatku beda one bardzo krotkie
// jak sie okazalo nie do konca
#include "Klasy.h"

//funkcja, ktora jest wywolana dla znalezienia wyjkatu, wypisuje swoj indeks i adres, oraz zwraca kolejny wyjatek
//jako ze jest to jedyna odosobniona funkcja zostawilem ja w tym miejscu, jako ze main.cpp nie mozna naruszac
void Przetworz(WspolnyWyjatek *wyjatek)
{
    std::cout<<"Przetworz - wyjatek typu "<<wyjatek->GetNumber()<<" o adresie: <"<<wyjatek<<">"<<std::endl;

    typ3 *w = dynamic_cast<typ3*>(wyjatek);
    throw w;
}
