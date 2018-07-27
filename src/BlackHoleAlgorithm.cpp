/*
 * BlackHoleAlgorithm.cpp
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 30th 2018
 * Last Update:   	June 6th 2018
 */

#include <BlackHoleAlgorithm.h>



BlackHoleAlgorithm::BlackHoleAlgorithm(const MKP problem,double MAX_TIME, double start_time, int population): problem(problem),MAX_TIME(MAX_TIME),start_time(start_time),population(population){

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
	double value = 0;
	for ( int i = 0; i < stars.size() ; i++)
		if (stars[i].fitness > value){
			value = stars[i].fitness;
			pos = i ;
		}
	for ( int i = 0; i < stars.size() ; i++)
		if (i!=pos)
			stars[i].is_blackhole = false;
		else
			stars[i].is_blackhole = true;
	cout << "blackhole fitness: " << stars[pos].fitness << endl;
	exit(1);
};

void BlackHoleAlgorithm::search(){

	while(double(clock()-start_time) / CLOCKS_PER_SEC < MAX_TIME){
		set_blackhole();
		vector<int> new_elements = movement();
		evaluate_population(new_elements);
		if (stars.size() < population){
			create_population();
		}
	}


};

void BlackHoleAlgorithm::evaluate_population(vector<int> new_elements){


};

vector<int> BlackHoleAlgorithm::movement(){
	vector<int> new_elements;




	return new_elements;
};
