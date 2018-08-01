/*
 * Star.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 31th 2018
 * Last Update:   	August 1th 2018
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

void Star::add_update_capacities(int position){
	for (int i = 0 ; i < problem.capacities.size() ; i++)
		actual_capacities[i] = actual_capacities[i]+problem.ctrs[position][i];
	fitness = fitness+problem.weights[position];
};

void Star::remove_update_capacities(int position){
	for (int i = 0 ; i < problem.capacities.size() ; i++)
		actual_capacities[i] = actual_capacities[i]-problem.ctrs[position][i];
	fitness = fitness-problem.weights[position];
};

bool Star::instanciate_position(int position){
	bool instanciated = true;
	for (int i = 0 ; i < problem.capacities.size() ; i++){
		if ((problem.ctrs[position][i]+actual_capacities[i])>problem.capacities[i]) {
			instanciated = false;
			break;
		}
	}
	if (instanciated){
		add_update_capacities(position);
	}

	return instanciated;
};

void Star::fix_star(){
	bool need_fix = true;
	double max_diff = 0;
	int constraint;

	while(need_fix){
		need_fix = false;
		for (int i = 0 ; i < actual_capacities.size() ; i++){
			if (actual_capacities[i] > problem.capacities[i]){
				need_fix = true;
				if ((actual_capacities[i]-problem.capacities[i])>max_diff){
					constraint = i;
					max_diff = actual_capacities[i]-problem.capacities[i];
				}
			}
		}
		double value = 0;
		int position;
		if (need_fix){
			for (int i = 0 ; i < star.size() ; i++){
				if (star[i]==1){
					if (value < (double)(problem.ctrs[i][constraint]/problem.weights[i])){
						position = i ;
						value = (double)(problem.ctrs[i][constraint]/problem.weights[i]);
					}
				}
			}
			star[position] = 0;
			remove_update_capacities(position);
		}
	}
};
