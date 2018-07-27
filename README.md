# MKP
Multidimensional Knapsack Problem
This version is being developed in c++11. 
Last update was on July 27th 2018

**To compile**

```
g++ -I src/ -std=c++11 main.cpp src/BlackHoleAlgorithm.cpp src/MKP.cpp src/Star.cpp src/RandomAlgorithm.cpp -o MKPSolver
```

**Execution example**

```
./MKPSolver ./benchmarks/instance.DAT time seed stars
```
where:
 - *instance.DAT*, is the instance to be executed.
 - *time*, maximum execution time.
 - *seed*, the corresponding seed.
 - *stars*, number of stars (solutions) of the algorithm.
 
### ToDo List

 - [ ] Add comments to MKP
 - [ ] Add comments to BlackHoleAlgorithm
 - [ ] Add comments to RandomAlgorithm
 - [ ] Add comments to Star  
 - [ ] MakeFile
 - [ ] BeamSearch (or some other strategy to construct new solutions)
 - [ ] Repairing method(s)
 - [ ] Memory (Penalizing strategies) 
 - [ ] Other metaheuristics 
 
# Authors

* **Victor Reyes** - PUCV - [webpage](https://sites.google.com/view/csvictor-reyes)
 