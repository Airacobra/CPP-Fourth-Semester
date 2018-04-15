#pragma once

//klasa przechowuje informacje o rozdzielczosci urzadzenia
//dodatkowo zawiera dwie metody umozliwiajace odwolanie sie dla klas skanera i drukarki 
//do rozdzielczosci przy przyjetech hierarchi

class Rozdzielczosc
{
public:

	Rozdzielczosc(const int s, const int w)
	:r_sz(s), r_wys(w){};

	int GetWys() const
	{
		return r_wys;
	}

	int GetSz() const 
	{
		return r_sz;
	}

	~Rozdzielczosc(){};

private:

	int r_sz;
	int r_wys;
	
};