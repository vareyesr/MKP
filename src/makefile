# Object files to either reference or create                          
OBJECTS = main.o BlackHoleAlgorithm.o MKP.o RandomAlgorithm.o Star.o           
# The executable file that will be created at the end                 
EXEC = MKPsolver                                                      
# The flags to use for compilation                                    
CXXFLAGS = -Wall                                                         
# The code compiler to use for compilation                            
CC = g++                                                              

# Perform action on all object files (May or may not exist)           
all: $(OBJECTS)                                                       
        $(CC) $(FLAGS) -o $(EXEC) $(OBJECTS)