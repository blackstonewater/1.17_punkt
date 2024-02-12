#include "Punkt3.h"
#include <iostream>

void Punkt3::wczytaj(){
	int data{};
	std::cout << "podaj x: "; std::cin >> data;
	set_x(data);
	std::cout << "podaj y: "; std::cin >> data;
	set_y(data);
	std::cout << "podaj z: "; std::cin >> data;
	set_z(data);
}

void Punkt3::wypisz() const{
	std::cout << "punkt x: " << x << "\n";
	std::cout << "punkt y: " << y << "\n";
	std::cout << "punkt z: " << z << "\n";
}

