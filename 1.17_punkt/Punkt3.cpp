#include "Punkt3.h"
#include <iostream>

void Punkt3::wczytaj(){
	set_x();
	set_y();
	set_z();
}

void Punkt3::wypisz() const{
	std::cout << "punkt x: " << x << "\n";
	std::cout << "punkt y: " << y << "\n";
	std::cout << "punkt z: " << z << "\n";
}

