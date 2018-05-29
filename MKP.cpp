/*
 * MKP.cpp
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 29th 2018
 * Last Update:   	May 29th 2018
 */

#include "MKP.h"

MKP::MKP(const char* inputFileName){
	input = inputFileName;/**/
	nb_knapsacks = 0;
	nb_objects = 0;
	optimum = 0;
}
