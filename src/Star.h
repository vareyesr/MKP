/*
 * Star.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 31th 2018
 * Last Update:   	August 1th 2018
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
	vector<int> allowed_pos;
	vector<int> actual_capacities;

	void update_positions(vector<int> allowed_pos);
	bool instanciate_position(int position);
	void add_update_capacities(int position);
	void remove_update_capacities(int position);
	void fix_star();

};

#endif /* STAR_H_ */
