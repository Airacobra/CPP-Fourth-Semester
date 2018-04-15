#pragma once
#include "Silnik.h"
//klasa pojazd, wraz z klasa silnik jest klasa bazowy dla pozostalych obiektow
//innych klas, przechowuje informacje o aktualnym przebiegu i kolorze
class Pojazd
{
public:
	//konstruktor domyslny
	Pojazd(){}
	//konstruktor zapisujacy informacje o kolrze i przebiegu
	Pojazd(const std::string kolor, const float przebieg):
	POJAZD_kolor(kolor),POJAZD_przebieg(przebieg){}

protected:
	std::string POJAZD_kolor;
	float POJAZD_przebieg;	
};

