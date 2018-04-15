//hieriarchia klas
#pragma once

#include "Rozdzielczosc.h" //klasa zawierajca wymiar m x n urzadzenia

#include "Urzadzenie.h"   // zawiera nazwy dla skanera, drukarki, ksera i urzadznie wielofunkcyjnego, diedziczy po ozdzielczosci
#include "Papierozerne.h" // klasa do sprawdzania czy wskaznik istnieje, nie dla skanera

#include "Skaner.h"		//te trzy klasy dziedzicza wirtualnie po urzadzeniu, dzieki czemu przy
#include "Drukarka.h"   //tworzeniu wielofunkcyjnosci nie zajmuje sie wiecej pamieci niz trzeba
#include "Ksero.h"      

#include "Wielofunkcyjne.h" //dziedziczy nie po skanerze, drukarce i kserze
