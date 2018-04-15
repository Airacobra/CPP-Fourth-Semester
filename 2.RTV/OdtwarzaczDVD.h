#pragma once
#include "Urzadzenia.h"

//klasa OdtwaraczDVD dziedziczaca po urzadzeniu, zawiera tylko potrzebne wywyolanie
//kostruktora, ktory zapisuje informacje korzystajac z klasy bazowej
class OdtwarzaczDVD : public Urzadzenia
{
public:
	OdtwarzaczDVD(const char litera):Urzadzenia(litera){}
};