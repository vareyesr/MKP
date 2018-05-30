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
#include "MKP.h"


using namespace std;

int main(int argc, char** argv){

    double MAX_TIME = atoi(argv[2]);
    int random_seed = atoi(argv[3]);            /*Input: Random seed*/
    std::srand(random_seed);
    /*Input reading*/
	MKP problem(argv[1]);
	/*Set parameters of search*/


	return 0 ;
}
