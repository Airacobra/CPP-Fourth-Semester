#pragma once
#include "Urzadzenia.h"

//przchowuje wartosc ramki, zamiast tworzyc dwie zmienne int 
//(w pętli for jako liczby '1' i '2' w osobnych plikach
//dla funckji wyswietlajacej
const int ramka = 2;

class Wyswietlacz
{
public:
	//konstruktor, zapisuje wartosc szerokosci i wysokosci okna korzystajac z klasy bazowej
	Wyswietlacz(const int sz, const int wys):m_szerokosc(sz), m_wysokosc(wys){}
	//funkcja czysto wirtualna, nadpisana w klasach pochodnych
	virtual void Wyswietl(const Urzadzenia &urz) const  = 0;
protected:
	//szzerokosc wyswietlanego obrazu (bez ramki)
	int m_szerokosc;
	//wysokosc wyswietlanego obrazu(bez ramki)
	int m_wysokosc;	
};