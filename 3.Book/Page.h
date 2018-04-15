#pragma once
#include <string>
#include <iostream>
//konmentarze ubogie bo malu czasu na ich pisanie jest
//klasa reprezentujaca strone, posiada naglowek i pole na tekst
class Page
{
public:
	//kostnruktor, ma domyslne argumenty
	Page(const std::string header = "empty", const std::string text = "empty");
	void AddHeader(const std::string str);
	void AddText(const std::string str);
	Page * Copy() const;
	void Print(const int flag = -1) const;
private:	
	std::string p_header;
	std::string p_text;

};