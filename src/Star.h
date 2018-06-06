/*
 * Star.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 31th 2018
 * Last Update:   	June 1th 2018
 */

#ifndef STAR_H_
#define STAR_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Star{

public:
	Star(int size_sol);

	vector<int> star;
	int fitness;
	bool is_blackhole;
	vector<int> weights;

	void update_fitness(vector<int> star);

};

#endif /* STAR_H_ */
