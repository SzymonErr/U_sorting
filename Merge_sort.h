/*
 * Mergesort.h
 *
 *  Created on: May 3, 2018
 *      Author: szymon
 */

#ifndef MERGESORT_H_
#define MERGESORT_H_
#include "Maketable.h"

class Merge_sort : public Maketable {
	void merge(int, int, int);
	void m_sort(int, int);
public:
	Merge_sort();
	virtual ~Merge_sort();
	void test();
	/*
	void merge(int, int, int);
	void m_sort(int, int);*/
	void merge_sort_please();
};

#endif /* MERGESORT_H_ */
