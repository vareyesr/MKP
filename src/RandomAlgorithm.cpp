/*
 * RandomAlgorithm.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	June 1th 2018
 * Last Update:   	June 1th 2018
 */

#include <RandomAlgorithm.h>

RandomAlgorithm::RandomAlgorithm(const MKP problem):problem(problem){

}

void RandomAlgorithm::solve(vector<Star> stars, int req_stars){

	std::set<int>::iterator it;
	for (int i = stars.size()-req_stars ; i < stars.size() ; i++){
		while(!stars[i].allowed_pos.empty()){
			int random_var = rand()%(stars[i].allowed_pos.size());
			it = stars[i].allowed_pos.begin();
			int position = (int)*it+random_var;
			stars[i].allowed_pos.erase(position);
			if (stars[i].check_position(position))
				stars[i].star[position] = 1;
			exit(1);
		}
	}

}
