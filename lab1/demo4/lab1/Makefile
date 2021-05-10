CC=g++ -std=c++11 -g -Wall
EXE_FILE=multdiv

$(EXE_FILE): multdiv.o prog.o
	$(CC) multdiv.o prog.o -o $(EXE_FILE)
multdiv.o: multdiv.h multdiv.cpp
	$(CC) -c multdiv.cpp
prog.o: prog.cpp
	$(CC) -c prog.cpp
.PHONY: clean
clean:
	rm -f *.out *.o $(EXE_FILE)
