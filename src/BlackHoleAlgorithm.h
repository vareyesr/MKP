/*
 * BlackHoleAlgorithm.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 30th 2018
 * Last Update:   	June 1th 2018
 */


#ifndef BLACKHOLEALGORITHM_H_
#define BLACKHOLEALGORITHM_H_

#include <iostream>
#include <vector>
#include "MKP.h"
#include "Star.h"


using namespace std;

class BlackHoleAlgorithm{

public:
	BlackHoleAlgorithm(const MKP problem, double MAX_TIME, double current_time , int population);

	void create_population(const MKP problem, int population);

	void evaluate_population();

	void movement();

	int population;
	double current_time;
	double MAX_TIME;
	const MKP problem;
	vector<Star> stars;
};

#endif /* BLACKHOLEALGORITHM_H_ */
