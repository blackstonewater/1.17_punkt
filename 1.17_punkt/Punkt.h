#pragma once
#include <iostream>
#include "Punkt3.h"

class Punkt
{
public:
	void wczytaj();
	void wypisz() const{
		std::cout << "twoj punkt znajduje sie na " << x << " osi x, i " << y << " osi y \n"; }
	void rzutuj(Punkt3 p3);
	friend Punkt rzutuj(Punkt3 p3);
private:
	int x{};
	int y{};

};

/*
1.17 Napisz klasę punkt służącą do przechowywania współrzędnych punk-
tu w dwuwymiarowym kartejzańskim układzie współrzędnych. Napisz
metody do wczytywania i wypisywania współrzędnych. Zadeklaruj wszyst-
kie pola klasy jako prywatne.
*/
