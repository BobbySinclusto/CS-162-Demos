CC = g++ -g -Wall -std=c++11
exe_file = demo

$(exe_file): Point.o demo.cpp
	$(CC) Point.o demo.cpp -o $(exe_file)

Point.o: Point.h Point.cpp
	$(CC) -c Point.cpp

.PHONY: clean

clean:
	rm -rf *.o $(exe_file)

