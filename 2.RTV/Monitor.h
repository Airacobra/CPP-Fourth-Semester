#pragma once
#include "Wyswietlacz.h"
#include "Urzadzenia.h"

//klasa Monitor dziedziczaca po Wyswietlaczu
class Monitor : public Wyswietlacz
{
public:
	//konstruktor korzystajacy z klasy bazowej
	Monitor(const int sz, const int wys):Wyswietlacz(sz,wys){}
	//funkcja wyswietlajaca poloczenie na ekran, przyjmuje argument klasy bazowej
	void Wyswietl(const Urzadzenia &urz) const;	
};