#pragma once
#include <iostream>

//klasa parent dla typow, posiada tylko virtualne metody i destruktor potrzebny przy usuwaniu
class WspolnyWyjatek{
public:

	virtual void PrzedstawSie() = 0;
	virtual int GetNumber() = 0;
	virtual ~WspolnyWyjatek(){}
};

//klasa dziedziczaca po wspolnymwyjatki, potrzebna tylko do przedstawienia sie
class typ1: public WspolnyWyjatek{
public:
	typ1():number(1){};

    void PrzedstawSie()
    {
           std::cout<<"Nazywam sie 1 (adres obiektu: <"<< this <<">)"<<std::endl;
    }

    int GetNumber()
    {
    	return number;
    }
private:
	int number;
};

//klasa dizedziczaca po wspolnymwyjatku bedaca parentem dla typu 2 ze wzgledu na dynamic_cast, przedstawia sie kiedy trzeba
class typ3: public WspolnyWyjatek{
public:

    typ3():number(3){};

    void PrzedstawSie()
    {
            std::cout<<"Nazywam sie 3 (adres obiektu: <"<< this <<">)"<<std::endl;
    }

    int GetNumber()
    {
    	return number;
    }
private:
	int number; 
};

//klasa dziedziczaca po typ3, nie dziedziczy po wspolnym wyjatku ze wzgledu na dynamiczne rzutowanie
class typ2: public typ3{
public:

	typ2():number(2){};

    void PrzedstawSie()
    {
           std::cout<<"Nazywam sie 2 (adres obiektu: <"<< this <<">)"<<std::endl;
    }

    int GetNumber()
    {
    	return number;
    }
private:
	int number;  
};

//klasa dziedziczaca po wspolnymwyjatki, potrzebna tylko do przedstawienia sie
class typ4: public WspolnyWyjatek{
public:

    typ4():number(4){};

    void PrzedstawSie()
    {
            std::cout<<"Nazywam sie 4 (adres obiektu: <"<< this <<">)"<<std::endl;
    }

    int GetNumber()
    {
    	return number;
    }
private:
	int number; 
};

//klasa ktorym jej jedynym zadaniem jest uroczyste rozpoczecie rzucania spirali wyjaktow
class ObiektMiotajacy{
public:

    void Rzuc()
    {
        throw new typ2;
    }
};

