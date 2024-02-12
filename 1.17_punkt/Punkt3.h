#pragma once
#include "Punkt.h"

class Punkt3
{
public:
	void wczytaj();
	void wypisz() const;
	int x{};
	int y{};
	int z{};
	friend Punkt rzutuj(Punkt3 p3);
private:

};

/*
1.18 (r) Napisz klasę punkt3 służącą do przechowywania współrzędnych
punktu w trójwymiarowym kartejzańskim układzie współrzędnych. Na-
pisz metody do wczytywania i wypisywania współrzędnych. Zadeklaruj
wszystkie pola klasy jako prywatne.
*/