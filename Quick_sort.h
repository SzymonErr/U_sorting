/*
 * Quick_sort.h
 *
 *  Created on: May 3, 2018
 *      Author: szymon
 */

#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_
#include "Maketable.h"

class Quick_sort : public Maketable {
protected:
	void q_sort(int, int);
public:
	Quick_sort();
	virtual ~Quick_sort();
	void quick_sort_please();
};

#endif /* QUICK_SORT_H_ */
