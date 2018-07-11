/*
 * Intro_sort.cpp
 *
 *  Created on: May 4, 2018
 *      Author: szymon
 */

#include "Intro_sort.h"

Intro_sort::Intro_sort() {
	// TODO Auto-generated constructor stub

}

Intro_sort::~Intro_sort() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruktor Intro_sort wywolany!" << std::endl;
}

int Intro_sort::podziel_tablice(int Begin, int End){
	int pivot, i1, i2, tmp;

	i1 = (Begin+End)/2;
	pivot = tab[i1];
	tab[i1] = tab[End];
	i2 = Begin;

	for (i1 = Begin; i1<End; i1++){
		if (tab[i1] >= pivot);
		else{
			tmp = tab[i2];
			tab[i2] = tab[i1];
			tab[i1] = tmp;
			i2++;
		}
	}

	tab[End] = tab[i2];
	tab[i2] = pivot;
	return i2;
}

void Intro_sort::intro_sort(int Begin, int End, int DepthLim){

	if((End-Begin+1) < 16){
		insert_sort(End-Begin+1, Begin);
		return;
	}
	if(DepthLim == 0){
		heap_sort(End-Begin+1, Begin);
		return;
	}
	int pivot = podziel_tablice(Begin, End);
	intro_sort(Begin, pivot-1, DepthLim-1);
	intro_sort(pivot, End, DepthLim-1);
	return;
}

void Intro_sort::intro_sort_please(){

	int DepthLim = 2 * log2(tab.size());

	intro_sort(0, (tab.size()-1), DepthLim);
	//std::cout << "Zakonczenie introspektywne zakonczone powodzeniem" << std::endl;
	//wydrukuj_tablice();
}
/*
void Intro_sort::wydrukuj_tablice(){
	std::cout << "Tablica: " << std::endl;
	for (int i=0; i<tab.size(); i++){
		std::cout << tab[i] << "  ";
	}
	std::cout << std::endl;
}

std::vector <int> Intro_sort::generate(int size){
	for (int i=0; i < size; i++){
		tab.push_back((std::rand() % 100) + 1);
	}
	std::cout << "Rozmiar tablicy: " << tab.size() << std::endl;
	std::cout << "Pierwszy element: " << tab[0] << std::endl;
	std::cout << "Ostatni element: " << tab[tab.size()-1] << std::endl;
	return tab;
}*/
