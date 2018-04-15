#pragma once

//klasa nadrzedna przechowujaca wartsc znaku dla danego urzadzenia
class Urzadzenia
{
public:
	//konstruktor zapisuacy litere (w programier wpierw jest wywolany dla klasy pochodnej)
	Urzadzenia(const char litera):m_znak(litera){}
	//funcka zwracajaca znak "v" lub "o", potrzebne przy wypisywaniu
	char pobierzZnak() const {return m_znak;}
protected:
	//do przchowywania litery urzadzena (dla komputera i odtwaraczaDVD)
	char m_znak;
};