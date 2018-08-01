/*
 * BlackHoleAlgorithm.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 30th 2018
 * Last Update:   	June 6th 2018
 */


#ifndef BLACKHOLEALGORITHM_H_
#define BLACKHOLEALGORITHM_H_

#include <iostream>
#include <vector>
#include <MKP.h>
#include <Star.h>
#include <RandomAlgorithm.h>
#include <cmath>
#include <cstdlib>


using namespace std;

class BlackHoleAlgorithm{

public:
	BlackHoleAlgorithm(const MKP problem, double MAX_TIME, double start_time , int population);

	void create_population();

	void movement();

	void set_blackhole();
	void event_horizon();
	void fix_solutions();
	void search();

	double best_solution;
	int star_best_sol;
	int population;
	double start_time;
	double MAX_TIME;
	const MKP problem;
	vector<Star> stars;
	vector <pair <int , double>> best_sols;

};

#endif /* BLACKHOLEALGORITHM_H_ */
