/*
 * maketable.h
 *
 *  Created on: May 1, 2018
 *      Author: szymon
 */

#ifndef MAKETABLE_H_
#define MAKETABLE_H_
#include <iostream>
#include <vector>
#include <cstdlib>

class Maketable {
protected:
	std::vector <int> tab;
public:
	Maketable();
	virtual ~Maketable();
	virtual std::vector <int> generate(int);
	std::vector <int> clean_tab();
	void wypisz_pierwszy();
	void wypisz_ostatni();
	void wypisz_rozmiar();
	virtual void wydrukuj_tablice();
	void kopiuj_tablice(Maketable);
};

#endif /* MAKETABLE_H_ */
