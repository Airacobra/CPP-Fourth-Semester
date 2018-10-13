#pragma once
#include <string>

//klasa szablonowa przechowujaca tablice dwuwymiarowa o typie "T" i rozmiarax "x", "y"
template <typename T, int x, int y> 
class Matrix
{
public:
	//konstruktor przydzielajacy pamiec dla kazdej komorki macierzy
	Matrix(): xSize(x), ySize(y)
	{
		tab = new T*[xSize];
		for (int i = 0; i < xSize; ++i)
		{
			tab[i] = new T[ySize];
		}
	}

	//getter do zwrocenia wartosci o zadanych wspolrzednych
	T getXYValue(const int xPosition, const int yPosition) const
	{
		return tab[xPosition][yPosition];
	}
	
	//funkcja ustawiajaca wszystkie komorki macierzy na zadana wartosc
	void reset(T value)
	{
		for (int i = 0; i < xSize; ++i)
		{
			for (int j = 0; j < ySize; ++j)
			{
				tab[i][j] = value;
			}
		}
	}

	//funkcja szablonowa zwracajaca pole macierzy pod zadana wartoscica
	template <int row, int column>
	T& at()
	{
		return tab[row][column];
	}

	//przeciezenie << w celu wypisania macierzy
	friend std::ostream& operator<<(std::ostream &output, const Matrix<T,x,y> &Array)
	{
		std::string temp_str = " ";

		for (int i = 0; i < x; ++i)
		{
			for (int j = 0; j < y; ++j)
			{
				temp_str += std::to_string(Array.tab[i][j]) + " ";	
			}
			temp_str += "\n";
		}

		return output<<temp_str;
	}	

	//szablonowa funkcja dodajaca do wartosci jednej macierzy do drugiej
	template <typename dziala>
	void add(const Matrix<dziala,x,y> &Array)
	{
		for (int i = 0; i < x; ++i)
		{
			for (int j = 0; j < y; ++j)
			{
				this->tab[i][j] += Array.getXYValue(i, j);
			}
		}
	}

	//destruktor zwracajacy przyznana dynamicznie pamiec
	~Matrix()
	{
		for(int i = 0; i < xSize; ++i)
		{
			delete tab[i];
		}

		delete tab;
	}

private:
	T ** tab;
	int xSize;
	int ySize;

};