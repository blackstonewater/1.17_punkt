#include "Punkt.h"
#include "Punkt3.h"
#include <iostream>

void Punkt::wczytaj(){
	std::cout << "podaj x: "; std::cin >> x;
	std::cout << "podaj y: "; std::cin >> y;
}

Punkt Punkt::rzutuj(Punkt3 p3){
	Punkt p2;
	p2.x = p3.x;
	p2.y = p3.y;
	return p2 ;
}

void Punkt::rzutuj(Punkt3 p3){
	x = p3.x;
	y = p3.y;
}