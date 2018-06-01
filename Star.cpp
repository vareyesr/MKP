/*
 * Star.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 31th 2018
 * Last Update:   	June 1th 2018
 */

#include "Star.h"



Star::Star(int size_sol): fitness(0),is_blackhole(false), weights(weights){

	for (int i = 0 ; i < size_sol ; i++) star.push_back(0);

}

void Star::update_fitness(vector<int> star){
	int value = 0;
	for (int i = 0 ; i < star.size() ; i++) value = value + star[i]*weights[i];
}
