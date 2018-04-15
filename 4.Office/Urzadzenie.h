#pragma once

//klasa ta dziedziczy po rozdzielczosci, dzieki czemu w koonstruktorach skanera, drukarki, ksera i wielofunkcjyjnosci 
//mozna zapisac dane o rodzielczosci, oraz osobno nazwe w urzadzeiu

#include "Rozdzielczosc.h"
#include <iostream>
#include <string>

class Urzadzenie
{
public:
	Urzadzenie(const std::string &n)
	:u_nazwa(n){};

	virtual std::string rodzaj() const = 0;

	virtual ~Urzadzenie(){}

protected:
	std::string u_nazwa;

private:
	//std::string u_nazwa;
};