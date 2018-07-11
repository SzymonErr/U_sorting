/*
 * Intro_sort.h
 *
 *  Created on: May 4, 2018
 *      Author: szymon
 */

#ifndef INTRO_SORT_H_
#define INTRO_SORT_H_
#include "Other_sorts.h"
//#include "Maketable.h"
//#include "Quick_sort.h"
#include <cmath>

class Intro_sort: public Other_sorts{
	void intro_sort(int, int, int);
	//std::vector <int> tab;
public:
	Intro_sort();
	virtual ~Intro_sort();
	int podziel_tablice(int, int);
	void intro_sort_please();
	//virtual void wydrukuj_tablice();
	//virtual std::vector <int> generate(int);
};

#endif /* INTRO_SORT_H_ */
