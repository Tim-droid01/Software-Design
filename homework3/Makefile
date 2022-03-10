all:main.o heartRate.o
	g++ -std=c++17 main.o heartRate.o -o test

main.o:main.cpp heartRate.h
	g++ -std=c++17 -c main.cpp

heartRate.o:heartRate.cpp heartRate.h
	g++ -std=c++17 -c heartRate.cpp

clean:
	rm -f main.o heartRate.o
	rm -f test
