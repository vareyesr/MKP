/*
 * MKP.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 29th 2018
 * Last Update:   	May 29th 2018
 */

#ifndef MKP_H_
#define MKP_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class MKP {
private:
    char* input;
public:
	MKP(const char* inputFileName);
	/*number of knapsacks*/
	int nb_knapsacks;
	/*number of objects*/
	int nb_objects;
	/*weights of objects*/
	vector<int> weights;
	/*knapsack capacities*/
	vector<int> capacities;
	/*matrix of constraints*/
//	int ctrs[nb_knapsacks][nb_objects];
	/*known optimum  (should I use it?)*/
	int optimum;
};




#endif /* MKP_H_ */
