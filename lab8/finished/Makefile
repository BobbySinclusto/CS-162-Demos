CC = g++ -g -std=c++11
exe_file = demo

exe_file: Array.hpp demo.cpp
	$(CC) Array.hpp demo.cpp -o $(exe_file)

clean:
	rm -rf *.o $(exe_file)
