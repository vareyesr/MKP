/*
 * Multidimensional Knapsnack Problem
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 29th 2018
 * Last Update:   	June 6th 2018
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

#include <BlackHoleAlgorithm.h>
#include <MKP.h>


using namespace std;

int main(int argc, char** argv){

    if (argc<5) {
    	cerr << "You must use : ./MKPSolver ./benchmarks/*.DAT MAX_TIME SEED POP_SIZE";
    	exit(1);
    }
	double start_s;
    /*Input reading*/
	MKP problem(argv[1]);
	/*Set parameters of search*/
    double MAX_TIME = atoi(argv[2]);			/*Input: MAX execution time*/
    int random_seed = atoi(argv[3]);            /*Input: Random seed*/
    int pop_size = atoi(argv[4]);				/*Input: MAX population size*/



    std::srand(random_seed);

    start_s=clock();
    /*Apply the BH algorithm*/
    BlackHoleAlgorithm _algorithm(problem,MAX_TIME,start_s,pop_size);

    /*print the solution + time + optimum*/
	return 0 ;
}
