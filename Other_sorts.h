/*
 * Other_sorts.h
 *
 *  Created on: May 3, 2018
 *      Author: szymon
 */

#ifndef OTHER_SORTS_H_
#define OTHER_SORTS_H_
#include "Maketable.h"

class Other_sorts : public Maketable {
protected:
	void heap_assemble(int, int);
	void heap_disassemble(int, int);
	void insert_sort(int, int);
	void heap_sort(int, int);
public:
	Other_sorts();
	virtual ~Other_sorts();
	void insert_sort_please();
	void heap_sort_please();
};

#endif /* OTHER_SORTS_H_ */
