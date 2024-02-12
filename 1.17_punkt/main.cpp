#include "Punkt.h"
#include "Punkt3.h"

int main(){
	// punkt
	/*
	*/
	Punkt xy;
	xy.wczytaj();
	xy.wypisz();

	// punkt3
	/*
	*/

	Punkt3 xyz;
	xyz.wczytaj();
	xyz.wypisz();

	std::cout << "po rzutorwaniu \n";
	Punkt rzutuj;
	rzutuj = rzutuj.rzutuj(xyz);
	rzutuj.wypisz();
}

/*
1.17 Napisz klasę punkt służącą do przechowywania współrzędnych punk-
tu w dwuwymiarowym kartejzańskim układzie współrzędnych. Napisz
metody do wczytywania i wypisywania współrzędnych. Zadeklaruj wszyst-
kie pola klasy jako prywatne.

1.18 (r) Napisz klasę punkt3 służącą do przechowywania współrzędnych
punktu w trójwymiarowym kartejzańskim układzie współrzędnych. Na-
pisz metody do wczytywania i wypisywania współrzędnych. Zadeklaruj
wszystkie pola klasy jako prywatne.

1.19 (r) Napisz funkcję rzutuj, która otrzymuje jako argument obiekt typu
punkt3 z zadania 1.18 i zwraca jako wartość obiekt typu punkt z zadania
1.17 będący prostopadłym rzutem punktu otrzymanego w argumencie
na płaszczyznę wyznaczoną przez dwie pierwsze współrzędne


1.20 (r) Do klasy punkt z zadania 1.17 dopisz metodę rzutuj, która otrzy-
muje jako argument obiekt typu punkt3 z zadania 1.18 i przypisuje
polom obiektu, na rzecz którego została wywołana, współrzędne pro-
stopadłego rzutu punktu otrzymanego w argumencie na płaszczyznę
wyznaczoną przez dwie pierwsze współrzędne
*/