/*
 * Multidimensional Knapsnack Problem
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 29th 2018
 * Last Update:   	May 29th 2018
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

#include "BlackHoleAlgorithm.h"
#include "MKP.h"


using namespace std;

int main(int argc, char** argv){

	double start_s, current_s;
    /*Input reading*/
	MKP problem(argv[1]);
	/*Set parameters of search*/
    double MAX_TIME = atoi(argv[2]);
    int random_seed = atoi(argv[3]);            /*Input: Random seed*/
    std::srand(random_seed);

    start_s=clock();
    /*Explore for initial solutions*/
//    BeamSearch()
    /*Apply BlackHole Algorithm*/
    current_s = clock();
    BlackHoleAlgorithm _algorithm(problem,MAX_TIME,(current_s-start_s)/double(CLOCKS_PER_SEC)*1000);

    /*print the solution + time + optimum*/
	return 0 ;
}
