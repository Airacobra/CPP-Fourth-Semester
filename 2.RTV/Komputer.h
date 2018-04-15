#pragma once
#include "Urzadzenia.h"

//klasa komputer dziedziczaca po urzadzeniu, zawiera tylko potrzebne wywyolanie
//kostruktora, ktory zapisuje informacje korzystajac z klasy bazowej
class Komputer : public Urzadzenia
{
public:
	Komputer(const char litera):Urzadzenia(litera){}
	
};