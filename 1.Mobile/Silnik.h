#pragma once
#include <iostream>
#include <string>
//klasa silnik, przechowuje informacje o mocy, rozmiarze i paliwie, 
//pelni funkcje klasy bazowej, silnik bedzie dolaczany do pozostalych
//obiektow innych klas
class Silnik
{
public:
	//konstruktor domyslny
	Silnik(){}
	//kosntruktor zapisujacy inforamcje o mocy, rozmiarze i paliwie
	Silnik(const int moc, const float rozmiar, const std::string paliwo):
	Silnik_moc(moc), Silnik_rozmiar(rozmiar), Silnik_paliwo(paliwo){}

protected:
	int Silnik_moc;
	float Silnik_rozmiar;
	std::string Silnik_paliwo;
};
