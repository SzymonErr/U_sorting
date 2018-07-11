/*
 * Mergesort.cpp
 *
 *  Created on: May 3, 2018
 *      Author: szymon
 */

#include "Merge_sort.h"

Merge_sort::Merge_sort() {
	// TODO Auto-generated constructor stub

}

Merge_sort::~Merge_sort() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruktor Merge_sort wywolany!" << std::endl;
}

void Merge_sort::test(){
	std::cout << "Test klasy" << std::endl;
	std::cout << "Rozmiar tablicy: " << tab.size() << std::endl;
}

void Merge_sort::merge(int iBegin, int iMiddle, int iEnd){
	int i_low, i_high, temp_tab[tab.size()], temp_i;

	i_low = iBegin;
	i_high = iMiddle;
	//temp_i = iBegin;

	//std::cout << "Tablica pomocnicza: ";
	for (temp_i = iBegin; temp_i <= iEnd; temp_i++){
		if((i_low == iMiddle) || ((i_high <= iEnd)&&(tab[i_low] > tab[i_high]))){
			temp_tab[temp_i] = tab[i_high];
			i_high++;
		}
		else{
			temp_tab[temp_i] = tab[i_low];
			i_low++;
		}
		//std::cout << temp_tab[temp_i] << "  " ;
	}
	//std::cout << std::endl;
	for (temp_i = iBegin; temp_i <= iEnd; temp_i++){
		tab[temp_i] = temp_tab[temp_i];
	}
	//wydrukuj_tablice();
	//return tab;
}

void Merge_sort::m_sort(int iBegin, int iEnd){
	int iMiddle;

	//std::cout << "Suma = " << iBegin + iEnd + 1 << " " << " iEnd = " << iEnd;
	iMiddle = (iBegin + iEnd + 1) / 2;
	//std::cout << " iMiddle = " << iMiddle << std::endl;

	if(iMiddle-iBegin > 1){
		//std::cout << "jestem w 1 ifie" << std::endl;
		m_sort(iBegin, iMiddle-1);
	}
	if(iEnd-iMiddle > 0){
		//std::cout << "jestem w 2 ifie" << std::endl;
		m_sort(iMiddle, iEnd);
	}
	//std::cout << "Where is your problem?" << std::endl;

	merge(iBegin, iMiddle, iEnd);
	//std::cout << "Where is your problem?" << std::endl;
	//return tab;
}

void Merge_sort::merge_sort_please(){
	m_sort(0, tab.size()-1);
	//std::cout << "Sortowanie przez scalanie zakonczone powodzeniem" << std::endl;
	//wydrukuj_tablice();
}
