#pragma once
#include <iostream>
class Punkt3
{
public:
	void set_x(){
		std::cout << "podaj x: "; std::cin >> x; }
	void set_y(){
		std::cout << "podaj y: "; std::cin >> y; }
	void set_z(){
		std::cout << "podaj z: "; std::cin >> z; }

	int get_x() const{
		return x; }
	int get_y() const{
		return y; }
	int get_z() const{
		return z; }

	void wczytaj();
	void wypisz() const;

	
private:
	int x{};
	int y{};
	int z{};
	

};

/*
1.18 (r) Napisz klasę punkt3 służącą do przechowywania współrzędnych
punktu w trójwymiarowym kartejzańskim układzie współrzędnych. Na-
pisz metody do wczytywania i wypisywania współrzędnych. Zadeklaruj
wszystkie pola klasy jako prywatne.
*/