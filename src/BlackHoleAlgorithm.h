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


using namespace std;

class BlackHoleAlgorithm{

public:
	BlackHoleAlgorithm(const MKP problem, double MAX_TIME, double start_time , int population);

	void create_population();

	void evaluate_population(vector<int> new_elements);

	vector<int> movement();

	void set_blackhole();

	void search();

	int population;
	double start_time;
	double MAX_TIME;
	const MKP problem;
	vector<Star> stars;
	vector <pair <int , double>> best_sols;

};

#endif /* BLACKHOLEALGORITHM_H_ */
