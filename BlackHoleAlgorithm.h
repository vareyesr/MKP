/*
 * BlackHoleAlgorithm.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 30th 2018
 * Last Update:   	May 31th 2018
 */


#ifndef BLACKHOLEALGORITHM_H_
#define BLACKHOLEALGORITHM_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "MKP.h"

using namespace std;

class BlackHoleAlgorithm{

public:
	BlackHoleAlgorithm(const MKP problem, double MAX_TIME, double current_time);

	void create_population();

	void evaluate_population();

	void movement();
};

#endif /* BLACKHOLEALGORITHM_H_ */
