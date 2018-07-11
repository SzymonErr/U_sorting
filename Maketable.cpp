/*
 * Maketable.cpp
 *
 *  Created on: May 1, 2018
 *      Author: szymon
 */

#include "Maketable.h"

Maketable::Maketable() {
	// TODO Auto-generated constructor stub

}

Maketable::~Maketable() {
	// TODO Auto-generated destructor stub
	//std::cout << "Destruktor Maketable wywolany!" << std::endl;
}

std::vector <int> Maketable::generate(int size){
	srand(time(NULL));
	/*for (int i=(size-1); i >= 0; i--){
		tab.push_back(i);
	}*/
	for (int i=0; i < size; i++){
		tab.push_back((std::rand() % 999999) + 1);
	}
	/*std::cout << "Rozmiar tablicy: " << tab.size() << std::endl;
	std::cout << "Pierwszy element: " << tab[0] << std::endl;
	std::cout << "Ostatni element: " << tab[tab.size()-1] << std::endl;
	*/
	return tab;
}

std::vector <int> Maketable::clean_tab(){
	tab.clear();
	return tab;
}

void Maketable::wypisz_pierwszy(){
	std::cout << "Pierwszy element: " << tab[0] << std::endl;
}

void Maketable::wypisz_ostatni(){
	std::cout << "Ostatni element: " << tab[tab.size()-1] << std::endl;
}

void Maketable::wypisz_rozmiar(){
	std::cout << "Rozmiar: " << tab.size() << std::endl;
}

void Maketable::wydrukuj_tablice(){
	std::cout << "Tablica: " << std::endl;
	//for (int i=0; i<tab.size(); i++){
	for (int i=0; i<tab.size(); i++){
		std::cout << tab[i] << "  ";
	}
	std::cout << std::endl;
}

void Maketable::kopiuj_tablice(Maketable tablica){
	for (int i = 0; i < tablica.tab.size(); i++){
		tab.push_back(tablica.tab[i]);
	}
	//std::cout << "Tablica skopiowana!" << std::endl;
	return;
}
