#include "Punkt3.h"
#include <iostream>

void Punkt3::wczytaj(){
	std::cout << "podaj x: "; std::cin >> x;
	std::cout << "podaj y: "; std::cin >> y;
	std::cout << "podaj z: "; std::cin >> z;
}

void Punkt3::wypisz() const{
	std::cout << "punkt x: " << x << "\n";
	std::cout << "punkt y: " << y << "\n";
	std::cout << "punkt z: " << z << "\n";
}

Punkt rzutuj(Punkt3 p3)
{
	return Punkt();
}
