/*
 * RandomAlgorithm.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	June 1th 2018
 * Last Update:   	July 27th 2018
 */

#include <RandomAlgorithm.h>

RandomAlgorithm::RandomAlgorithm(const MKP problem):problem(problem),best_solution(0){

}

void RandomAlgorithm::solve(vector<Star>& stars, int req_stars){

	for (int i = stars.size()-req_stars ; i < stars.size() ; i++){
		while(!stars[i].allowed_pos.empty()){
			int random_var = rand()%(stars[i].allowed_pos.size());
			int position = stars[i].allowed_pos[random_var];
			stars[i].allowed_pos.erase(stars[i].allowed_pos.begin()+random_var);
			if (stars[i].instanciate_position(position)){
				stars[i].star[position] = 1;
			}
		}
	}

}
