CC = g++

CFLAGS = -g -Wall -std=c++11

all: Sort

clean:
		rm  -f *.o Sort
		
Sort: main.o Merge_sort.o Quick_sort.o Other_sorts.o Intro_sort.o Maketable.o
		$(CC) $(CFLAGS) -o Sort main.o Merge_sort.o Maketable.o Quick_sort.o Other_sorts.o Intro_sort.o
		
main.o: main.cpp Merge_sort.h Maketable.h
		$(CC) $(CFLAGS) -c main.cpp
		
Intro_sort.o: Intro_sort.cpp Intro_sort.h Other_sorts.h Maketable.h
		$(CC) $(CFLAGS) -c Intro_sort.cpp 
	
Merge_sort.o: Merge_sort.cpp Merge_sort.h Maketable.h
		$(CC) $(CFLAGS) -c Merge_sort.cpp 

Quick_sort.o: Quick_sort.cpp Quick_sort.h Maketable.h
		$(CC) $(CFLAGS) -c Quick_sort.cpp 	
		
Other_sorts.o: Other_sorts.cpp Other_sorts.h Maketable.h
		$(CC) $(CFLAGS) -c Other_sorts.cpp 	
	
Maketable.o: Maketable.cpp Maketable.h
		$(CC) $(CFLAGS) -c Maketable.cpp
		