#pragma once
#include <iostream>
class Punkt3
{
public:
	void set_x(int new_x){
		 x = new_x; }
	void set_y(int new_y){
		y = new_y; }
	void set_z(int new_z){
		z = new_z; }

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