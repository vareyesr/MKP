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
    std::string _input;
public:
	MKP(std::string inputFileName);

	void read_file(std::string input);
	/*number of knapsacks*/
	int nb_knapsacks;
	/*number of objects*/
	int nb_objects;
	/*weights of objects*/
	vector<int> weights;
	/*knapsack capacities*/
	vector<int> capacities;
	/*matrix of constraints*/
	vector<vector <int>> ctrs;
	/*known optimum  (should I use it?)*/
	int optimum;
};




#endif /* MKP_H_ */
