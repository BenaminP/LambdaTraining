/*
 * main.cpp
 *
 *  Created on: 24.02.2015
 *      Author: benjamin
 */

#include <iostream>
#include <vector>
#include <string>
#include "../include/Filter.h"
#include "../../libs/libalgorithm/include/AlgorithmArithmeticMean.h"
#include "../../libs/libalgorithm/include/AlgorithmRms.h"


using namespace std;
using namespace lambda;

int main()
{
	Filter<int> myFilter;
	AlgorithmArithmeticMean aam;
	AlgorithmRms arms;

	myFilter.addFilterAlgorithm( [&] (const vector<int>& values) {aam.doFiltering(values);} );
	myFilter.addFilterAlgorithm( [&] (const vector<int>& values) {arms.doFiltering(values);} );

	int x1 = 2;
	int x2 = 4;
	int x3 = 4;
	int x4 = 6;
	int x5 = 6;
	int x6 = 6;
	int x7 = 8;
	int x8 = 100;
	int x9 = 6;
	int x10 = 8;
	int x11 = 6;
	int x12 = 8;
	int x13 = 9;

	myFilter.addValue(x1);
	myFilter.addValue(x2);
	myFilter.addValue(x3);
	myFilter.addValue(x4);
	myFilter.addValue(x5);
	myFilter.addValue(x6);
	myFilter.addValue(x7);
	myFilter.addValue(x8);
	myFilter.addValue(x9);
	myFilter.addValue(x10);
	myFilter.addValue(x11);
	myFilter.addValue(x12);
	myFilter.addValue(x13);


	cout<<"Arithmetic mean value:\t"<<aam.getFilteredValue()<<endl;
	cout<<"RMS value:\t\t"<<arms.getFilteredValue()<<endl;

	myFilter.rmImplausibleValues((double) aam.getFilteredValue(), 0.5);

	cout<<"Arithmetic mean value:\t"<<aam.getFilteredValue()<<endl;
	cout<<"RMS value:\t\t"<<arms.getFilteredValue()<<endl;
}


