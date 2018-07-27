/*
 * Star.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 31th 2018
 * Last Update:   	June 6th 2018
 */

#ifndef STAR_H_
#define STAR_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <set>
#include <MKP.h>

using namespace std;

class Star{

public:

	Star(int size_sol,const MKP problem);

	vector<int> star;
	double fitness;
	bool is_blackhole;
	MKP problem;
	set<int> allowed_pos;
	vector<int> actual_capacities;

	void update_fitness(vector<int> star ,vector<int> weights);
	void update_positions(set<int> allowed_pos);
	bool check_position(int position);
	void update_capacities(int position);

};

#endif /* STAR_H_ */
