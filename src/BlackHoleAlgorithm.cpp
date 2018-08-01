/*
 * BlackHoleAlgorithm.cpp
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 30th 2018
 * Last Update:   	August 1th 2018
 */

#include <BlackHoleAlgorithm.h>



BlackHoleAlgorithm::BlackHoleAlgorithm(const MKP problem,double MAX_TIME, double start_time, int population): problem(problem),MAX_TIME(MAX_TIME),start_time(start_time),population(population),best_solution(0),star_best_sol(0){

	create_population();
	search();
};


void BlackHoleAlgorithm::create_population(){

	int begin = stars.size();
	for ( int i = begin ; i < population ; i++){
		Star _star(problem.nb_objects,problem);
		stars.push_back(_star);
	}
	RandomAlgorithm Random_algo(problem);
	Random_algo.solve(stars,population-begin);
};

void BlackHoleAlgorithm::set_blackhole(){
	int pos;
	double value = best_solution;
	bool has_change = false;
	for ( int i = 0; i < stars.size() ; i++)
		if (stars[i].fitness > value){
			value = stars[i].fitness;
			pos = i ;
			best_solution = stars[pos].fitness;
			star_best_sol = pos;
			has_change = true;
			cout << "black hole fitness: " << stars[pos].fitness << "  " <<double(clock()-start_time) / CLOCKS_PER_SEC << endl;
		}

	if (has_change){
		for ( int i = 0; i < stars.size() ; i++)
			if (i!=pos)
				stars[i].is_blackhole = false;
			else
				stars[i].is_blackhole = true;
	}

};

void BlackHoleAlgorithm::search(){
	while(double(clock()-start_time) / CLOCKS_PER_SEC < MAX_TIME){
		set_blackhole();
		movement();
		for (int i = 0; i < stars.size() ; i++)
			stars[i].fix_star();
		event_horizon();
		if (stars.size() < population)
			create_population();

	}
};


void BlackHoleAlgorithm::movement(){
	for(int i = 0 ; i < stars.size() ; i++ ){
		if (!stars[i].is_blackhole){
			for (int j = 0 ; j < stars[i].star.size() ; j++){
				if ((stars[i].star[j] == 0) && (stars[i].star[star_best_sol] == 0)){
					double rand = ((double) std::rand() / (RAND_MAX));
					double coef = 1/(1+std::exp((-stars[i].fitness+best_solution)/best_solution));
					if (rand < coef){
						stars[i].star[j] = std::abs(stars[i].star[j]-1);
						if (stars[i].star[j] == 1) stars[i].add_update_capacities(j);
						else stars[i].remove_update_capacities(j);
					}
				}
			}
		}
	}

};

void BlackHoleAlgorithm::event_horizon(){
	double stars_fitness = 0;
	double blackhole_fitness;
	for (int i = 0 ; i < stars.size() ; i++)
		if (!stars[i].is_blackhole)
			stars_fitness = stars_fitness + stars[i].fitness;
		else
			blackhole_fitness = stars[i].fitness;
	double R = (double)(blackhole_fitness/stars_fitness);
	double rand = ((double) std::rand() / (RAND_MAX));
	vector<int> to_delete;
	for (int i = 0 ; i < stars.size() ; i++)
		if ((!stars[i].is_blackhole) && (R > rand))
			to_delete.push_back(i);
	int k = 0;
	for (int i = 0 ; i < to_delete.size() ; i++){
		stars.erase(stars.begin()+to_delete[i]-k);
		k++;
	}
};
