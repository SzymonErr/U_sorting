/*
 * Quick_sort.cpp
 *
 *  Created on: May 3, 2018
 *      Author: szymon
 */

#include "Quick_sort.h"

Quick_sort::Quick_sort() {
	// TODO Auto-generated constructor stub

}

Quick_sort::~Quick_sort() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruktor Quick_sort wywolany!" << std::endl;
}

void Quick_sort::q_sort(int Begin, int End){
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

	if(Begin < (i2-1)) q_sort(Begin, i2-1);
	if(i2+1 < End) q_sort(i2+1, End);

}

void Quick_sort::quick_sort_please(){
	q_sort(0, tab.size()-1);
	//std::cout << "Sortowanie szybkie zakonczone powodzeniem" << std::endl;
	//wydrukuj_tablice();
}


