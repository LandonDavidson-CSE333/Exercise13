HEADERS = Coordinate.h Cartesian.h Polar.h
CPP = g++ -h -Wall --std=c++17

all: Cartesian.o Polar.o ex13.o
	$(CPP) -o ex13 $^
ex13.o: ex13.cc $(HEADERS)
	$(CPP) -c ex13.cc
Cartesian.o: Cartesian.cc $(HEADERS)
	$(CPP) -c Cartesian.cc
Polar.o: Polar.cc $(HEADERS)
	$(CPP) -c Polar.cc