#pragma once

#include <iostream>
#include <string>


//klasa Pomieszczenia 
class Pomieszczenie
{
public:

	//kosntruktor przypisujacy tylko nazwe pomieszczenia
	Pomieszczenie(const std::string m):p_miejsce(m)
	{
		std::cout<<"Tworze pomieszczenie: "<<p_miejsce<<std::endl;
	}

	//stala funkjca informujaca o czynnosci w danym miejscu
	void zetrzyj_kurze() const
	{
		std::cout<<"Scieram kurze w pomieszczeniu: "<<p_miejsce<<std::endl;
	}

	//stala funkjca informujaca o czynnosci w danym miejscu
	void umyj_podloge() const
	{
		std::cout<<"Myje podloge w pomieszczeniu: "<<p_miejsce<<std::endl;
	}

	//stala funkjca informujaca o czynnosci w danym miejscu
	void odkurz() const
	{
		std::cout<<"Odkurzam pomieszczenie: "<<p_miejsce<<std::endl;
	}

	//szablon do dowolnego miejsca w domu, pozwala na wstawienie miejsca w szablon
	template <typename T> 
	void wstaw(const T value) const
	{
		std::cout<<"Wstawiam "<<value<<" do pomieszecznia: "<<p_miejsce<<std::endl;
	}

	//getter potrzebny dla Lokaja, bo nie ma kluczy do kazdego miesjca
	std::string PodajNazwePomieszczenia() const
	{
		return p_miejsce;
	}

private:
	std::string p_miejsce;
	
};