/*
 * RandomAlgorithm.h
 *
 * Author: 			Victor Reyes
 * University:  	Pontificia Universidad Catolica de Valparaiso, Valparaiso, Chile
 * Created		:	May 30th 2018
 * Last Update:   	July 27th 2018
 */

#ifndef RANDOMALGORITHM_H_
#define RANDOMALGORITHM_H_
#include <Star.h>
#include <MKP.h>


class RandomAlgorithm{
public:
	RandomAlgorithm(const MKP problem);

	void solve(vector<Star>& stars, int nb_stars);

	MKP problem;
};




#endif /* RANDOMALGORITHM_H_ */
