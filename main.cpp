/*
 * main.cpp
 *
 *  Created on: Apr 30, 2018
 *      Author: szymon
 */
#include <iostream>
#include <vector>
#include "Merge_sort.h"
#include "Maketable.h"
#include "Quick_sort.h"
#include "Other_sorts.h"
#include "Intro_sort.h"
#include <cstdlib>
#include <cstdio>
#include <chrono>
#include <ctime>
using namespace std;

float wylicz_srednia(int pocz_tab, int liczba_pomiarow, float tab[]){
	float suma = 0;
	for (int i = 0; i < liczba_pomiarow; i++){
		suma = suma + tab[pocz_tab+i];
		//cout << "SUMA: " << suma << endl;
	}
	suma = suma/liczba_pomiarow;
	return suma;
}

int main() {
	Merge_sort tab1;
	Quick_sort tab2;
	Other_sorts tab31, tab32;
	Intro_sort tab4;
	int liczba_pom = 100;
	float tajm[500];

	std::chrono::time_point<std::chrono::system_clock> start, end;

	cout << endl << "******************************************************" << endl << endl << endl;

	for (int i = 0; i < liczba_pom; i++){
	cout << "Seria: " << i << endl;
	tab1.clean_tab();
	tab2.clean_tab();
	tab31.clean_tab();
	tab32.clean_tab();
	tab4.clean_tab();

	tab1.generate(10000);
	tab2.kopiuj_tablice(tab1);
	tab31.kopiuj_tablice(tab1);
	tab32.kopiuj_tablice(tab1);
	tab4.kopiuj_tablice(tab1);

	//cout << endl << "******************************************************" << endl << endl << endl;


	//tab1.wydrukuj_tablice();
	//cout << "Sortowanie przez scalanie" << endl;
	start = std::chrono::system_clock::now();
	tab1.merge_sort_please();
	end = std::chrono::system_clock::now();
	//tab1.wydrukuj_tablice();

	std::chrono::duration<double> dur_time = end-start;
	tajm[i] = dur_time.count();
	//cout << "Tajm[" << i << "] = " << tajm[i] << endl;
	//cout << "Czas: " << dur_time.count();
	//cout << endl << endl;


	//tab2.wydrukuj_tablice();
	//cout << "Sortowanie szybkie" << endl;
	start = std::chrono::system_clock::now();
	tab2.quick_sort_please();
	end = std::chrono::system_clock::now();
	//tab2.wydrukuj_tablice();

	dur_time = end-start;
	tajm[i+1*liczba_pom] = dur_time.count();
	//cout << "Czas: " << dur_time.count();
	//cout << endl << endl;

/*
	//tab31.wydrukuj_tablice();
	//cout << "Sortowanie przez kopcowanie" << endl;
	start = std::chrono::system_clock::now();
	tab31.heap_sort_please();
	end = std::chrono::system_clock::now();
	//tab31.wydrukuj_tablice();

	dur_time = end-start;
	tajm[i+2*liczba_pom] = dur_time.count();
	//cout << "Czas: " << dur_time.count();
	//cout << endl << endl;
*/
/*
	//tab32.wydrukuj_tablice();
	//cout << "Sortowanie przez wstawianie" << endl;
	start = std::chrono::system_clock::now();
	tab32.insert_sort_please();
	end = std::chrono::system_clock::now();
	//tab32.wydrukuj_tablice();

	dur_time = end-start;
	//cout << "Czas: " << dur_time.count();
	tajm[i+3*liczba_pom] = dur_time.count();
	//cout << endl << endl;
*/

	//tab4.wydrukuj_tablice();
	//cout << "Sortowanie Introspektywne (Introsort)" << endl;
	start = std::chrono::system_clock::now();
	tab4.intro_sort_please();
	end = std::chrono::system_clock::now();
	//tab4.wydrukuj_tablice();

	dur_time = end-start;
	//cout << "Czas: " << dur_time.count();
	tajm[i+4*liczba_pom] = dur_time.count();
	//cout << endl << endl;
	}

	cout << endl << "******************************************************" << endl;

	cout << "Srednie czasy sortowan: " << endl;
	cout << "Sortowanie przez scalanie: " << wylicz_srednia(0, liczba_pom, tajm) << endl;
	cout << "Sortowanie szybkie: " << wylicz_srednia(1*liczba_pom, liczba_pom, tajm) << endl;
	//cout << "Sortowanie przez kopcowanie: " << wylicz_srednia(2*liczba_pom, liczba_pom, tajm) << endl;
	//cout << "Sortowanie przez wstawianie: " << wylicz_srednia(3*liczba_pom, liczba_pom, tajm) << endl;
	cout << "Sortowanie introspektywne: " << wylicz_srednia(4*liczba_pom, liczba_pom, tajm) << endl;

/**************************************************************************************************/

	tab1.clean_tab();
	tab2.clean_tab();
	/*
	tab31.clean_tab();
	tab32.clean_tab();
	*/
	tab4.clean_tab();

	tab1.generate(20);
	tab2.kopiuj_tablice(tab1);
	/*
	tab31.kopiuj_tablice(tab1);
	tab32.kopiuj_tablice(tab1);
	*/
	tab4.kopiuj_tablice(tab1);

	cout << endl << "******************************************************" << endl << endl << endl;


	tab1.wydrukuj_tablice();
	cout << endl << endl;
	cout << "Sortowanie przez scalanie" << endl;
	//start = std::chrono::system_clock::now();
	tab1.merge_sort_please();
	//end = std::chrono::system_clock::now();
	tab1.wydrukuj_tablice();

	//std::chrono::duration<double> dur_time = end-start;
	//tajm[i] = dur_time.count();
	//cout << "Tajm[" << i << "] = " << tajm[i] << endl;
	//cout << "Czas: " << dur_time.count();
	cout << endl << endl;


	//tab2.wydrukuj_tablice();
	cout << "Sortowanie szybkie" << endl;
	//start = std::chrono::system_clock::now();
	tab2.quick_sort_please();
	//end = std::chrono::system_clock::now();
	tab2.wydrukuj_tablice();

	//dur_time = end-start;
	//tajm[i+1*liczba_pom] = dur_time.count();
	//cout << "Czas: " << dur_time.count();
	cout << endl << endl;

/*
	//tab31.wydrukuj_tablice();
	cout << "Sortowanie przez kopcowanie" << endl;
	//start = std::chrono::system_clock::now();
	tab31.heap_sort_please();
	//end = std::chrono::system_clock::now();
	tab31.wydrukuj_tablice();

	//dur_time = end-start;
	//tajm[i+2*liczba_pom] = dur_time.count();
	//cout << "Czas: " << dur_time.count();
	cout << endl << endl;


	//tab32.wydrukuj_tablice();
	cout << "Sortowanie przez wstawianie" << endl;
	//start = std::chrono::system_clock::now();
	tab32.insert_sort_please();
	//end = std::chrono::system_clock::now();
	tab32.wydrukuj_tablice();

	//dur_time = end-start;
	//cout << "Czas: " << dur_time.count();
	//tajm[i+3*liczba_pom] = dur_time.count();
	cout << endl << endl;
*/

	//tab4.wydrukuj_tablice();
	cout << "Sortowanie Introspektywne (Introsort)" << endl;
	//start = std::chrono::system_clock::now();
	tab4.intro_sort_please();
	//end = std::chrono::system_clock::now();
	tab4.wydrukuj_tablice();

	//dur_time = end-start;
	//cout << "Czas: " << dur_time.count();
	//tajm[i+4*liczba_pom] = dur_time.count();
	cout << endl << endl;

	cout << endl << "******************************************************" << endl;

	/*cout << "Srednie czasy sortowan: " << endl;
	cout << "Sortowanie przez scalanie: " << wylicz_srednia(0, liczba_pom, tajm) << endl;
	cout << "Sortowanie szybkie: " << wylicz_srednia(1*liczba_pom, liczba_pom, tajm) << endl;
	cout << "Sortowanie przez kopcowanie: " << wylicz_srednia(2*liczba_pom, liczba_pom, tajm) << endl;
	cout << "Sortowanie przez wstawianie: " << wylicz_srednia(3*liczba_pom, liczba_pom, tajm) << endl;
	cout << "Sortowanie introsortywne: " << wylicz_srednia(4*liczba_pom, liczba_pom, tajm) << endl;
 */


	return 0;
}


