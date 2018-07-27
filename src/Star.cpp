/*
 * Star.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 31th 2018
 * Last Update:   	July 27th 2018
 */

#include <Star.h>



Star::Star(int size_sol,const MKP problem): fitness(0),problem(problem),is_blackhole(false){

	for (int i = 0 ; i < size_sol ; i++){
		allowed_pos.push_back(i);
		star.push_back(0);
	}
	for (int i = 0 ; i < problem.capacities.size() ; i++)
		actual_capacities.push_back(0);

};

void Star::update_fitness_add(int position){
	fitness = fitness+problem.weights[position];
};

void Star::update_fitness_remove(int position){
	fitness = fitness-problem.weights[position];
};

void Star::update_capacities(int position){
	for (int i = 0 ; i < problem.capacities.size() ; i++)
		actual_capacities[i] = actual_capacities[i]+problem.ctrs[position][i];
};


bool Star::check_position(int position){
	bool instanciated = true;
	for (int i = 0 ; i < problem.capacities.size() ; i++){
		if ((problem.ctrs[position][i]+actual_capacities[i])>problem.capacities[i]) {
			instanciated = false;
			break;
		}
	}
	if (instanciated){
		update_capacities(position);
		update_fitness_add(position);
	}

	return instanciated;
};

void update_positions(vector<int> allowed_pos){



};
