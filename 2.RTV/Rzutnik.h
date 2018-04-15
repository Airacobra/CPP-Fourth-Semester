#pragma once
#include "Wyswietlacz.h"
#include "Urzadzenia.h"

//klasa Rzutnik dziedziczaca po Wyswietlaczu
class Rzutnik : public Wyswietlacz
{
public:
	////konstruktor korzystajacy z klasy bazowej
	Rzutnik(const int sz, const int ws):Wyswietlacz(sz,ws){}
	//funkcja wyswietlajaca poloczenie na ekran, przyjmuje argument klasy bazowej
	void Wyswietl(const Urzadzenia &urz) const;
};