#include "Rzutnik.h"
#include <iostream>

void Rzutnik::Wyswietl(const Urzadzenia &urz) const{
		char typUrzadzenia = urz.pobierzZnak();
	if(typUrzadzenia == 'v') std::cout<<("Polaczono rzutnik i komputer\n");
	else std::cout<<("Polaczono rzutnik i DVD\n");
	for(int i = 0; (i < ramka - 1); i++){
		for(int j = 0; j < m_szerokosc; j++){
			std::cout<<"-";
		}
		std::cout<<"\n";
	}
	for(int i = 0; i < m_wysokosc; i++){
		for(int j = 0; j < m_szerokosc; j++){ 
				std::cout<<urz.pobierzZnak();
		}		
		std::cout<<"\n";
	}
	for(int i = 0; i < (ramka -1); i++){
		for(int j = 0; j < m_szerokosc; j++){
			std::cout<<"-";
		}
		std::cout<<"\n";
	}
	std::cout<<"\n\n";
}	
