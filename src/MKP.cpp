/*
 * MKP.cpp
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 29th 2018
 * Last Update:   	May 30th 2018
 */

#include <MKP.h>

MKP::MKP(std::string inputfileName): _input(inputfileName),nb_knapsacks(0),nb_objects(0),optimum(0){
	read_file(_input);
}

void MKP::read_file(std::string input){

	ifstream file;
	file.open(input);
	file >> nb_knapsacks;
	file >> nb_objects;

	/*storing number of objects*/
	for (int i = 0 ; i < nb_objects ; i++){
		int _aux;
		file >> _aux;
		weights.push_back(_aux);
	}
	/*storing knapsacks capacities*/
	for (int i = 0 ; i < nb_knapsacks ; i++){
		int _aux;
		file >> _aux;
		capacities.push_back(_aux);
	}
	/*storing matrix of constraints*/
	for (int i = 0 ; i < nb_objects ; i++){
		vector<int> _aux;
		ctrs.push_back(_aux);
		for (int j = 0 ; j < nb_knapsacks ; j++){
			int _element;
			file >> _element;
			ctrs[i].push_back(_element);
		}
	}
	/*storing the optimum (?)*/
	file >> optimum;
}
