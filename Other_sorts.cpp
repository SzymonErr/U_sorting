/*
 * Other_sorts.cpp
 *
 *  Created on: May 3, 2018
 *      Author: szymon
 */

#include "Other_sorts.h"

Other_sorts::Other_sorts() {
	// TODO Auto-generated constructor stub

}

Other_sorts::~Other_sorts() {
	// TODO Auto-generated destructor stub
	std::cout << "Destruktor Other_sorts wywolany!" << std::endl;
}

void Other_sorts::insert_sort(int size, int Begin){
	int i1, i2, tmp;

	for (i1 = size-1; i1 >= 0; i1--){
		tmp = tab[Begin+i1];
		i2 = i1 + 1;
		while((i2 < size) && (tmp > tab[Begin+i2])){
			tab[Begin+i2-1] = tab[Begin+i2];
			i2++;
		}
		tab[Begin+i2-1] = tmp;
	}
}

void Other_sorts::insert_sort_please(){
	insert_sort(tab.size(), 0);
	//std::cout << "Sortowanie przez wstawianie zakonczone powodzeniem" << std::endl;
	//wydrukuj_tablice();
}

void Other_sorts::heap_assemble(int size, int Begin){
	int i, index1, index2, tmp;

	for (i = 1; i<size; i++){
		index1 = i;
		index2 = index1/2;
		tmp = tab[i+Begin];

		while((index2 >= 0) && (tab[index2] < tmp) && (index1 != 0)){
			tab[index1+Begin] = tab[index2+Begin];
			index1 = index2;
			index2 = index1/2;
		}

		tab[index1+Begin] = tmp;
	}
}

void Other_sorts::heap_disassemble(int size, int Begin){
	int i, index1, index2, tmp, gr8er;

	for (i = size-1; i>0; i--){
		tmp = tab[0+Begin];
		tab[0+Begin] = tab[Begin+i];
		tab[i] = tmp;
		index1 = 0;
		index2 = 1;

		while(index2 < i){
			if((index2 + 1 < i) && (tab[Begin+index2+1] > tab[Begin+index2]))
				gr8er = index2 + 1;
			else gr8er = index2;

			if(tab[Begin+gr8er] <= tab[Begin+index1]) break;

			tmp = tab[Begin+index1];
			tab[Begin+index1] = tab[Begin+gr8er];
			tab[Begin+gr8er] = tmp;
			index1 = gr8er;
			index2 = index1 + index1;

		}
	}
}

void Other_sorts::heap_sort(int size, int Begin){
	heap_assemble(size, Begin);
	//wydrukuj_tablice();
	heap_disassemble(size, Begin);
}

void Other_sorts::heap_sort_please(){
	heap_sort(tab.size(), 0);
	//std::cout << "Sortowanie przez kopcowanie zakonczone powodzeniem" << std::endl;
	//wydrukuj_tablice();
}

