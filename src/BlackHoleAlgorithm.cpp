/*
 * BlackHoleAlgorithm.cpp
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 30th 2018
 * Last Update:   	June 1th 2018
 */
#include "BlackHoleAlgorithm.h"



BlackHoleAlgorithm::BlackHoleAlgorithm(const MKP problem,double MAX_TIME, double current_time, int population): problem(problem),MAX_TIME(MAX_TIME),current_time(current_time),population(population){

	create_population(problem,population);

}


void BlackHoleAlgorithm::create_population(const MKP problem, int population){

	int begin = stars.size();
	for ( int i = begin ; i < population ; i++){
		Star _star(problem.nb_objects);

	}

}

void BlackHoleAlgorithm::evaluate_population(){


}

void BlackHoleAlgorithm::movement(){




};
