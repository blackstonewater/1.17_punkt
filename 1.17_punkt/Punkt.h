#pragma once
#include <iostream>
#include "Punkt.h"
#include "Punkt3.h"

class Punkt
{
public:
	void wczytaj();
	void wypisz() const{
		std::cout << "twoj punkt znajduje sie na " << x << " osi x, i " << y << " osi y \n"; }
	int get_x(){
		return x; }
	int get_y(){
		return y; }

	//void rzutuj(Punkt3& p);
	Punkt rzutuj(Punkt3& p){
		Punkt xy1;
		xy1.x = p.get_x();
		xy1.y = p.get_y();
		return xy1;
	}
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
