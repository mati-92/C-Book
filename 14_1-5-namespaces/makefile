
#my_test: my_test.cpp met_office.o weather_station.o humidity.o
#	g++ my_test.cpp met_office.o weather_station.o humidity.o -o my_test

#met_office.o: met_office.cxx met_office.h
#	g++ -c met_office.cxx

#weather_station.o: weather_station.cxx weather_station.h
#	g++ -c weather_station.cxx

#humidity.o: humidity.cxx humidity.h 
#	g++ -c humidity.cxx

# The makefile for the ecxercise
ecxercise: excercise.cpp met_office.o 
	g++ excercise.cpp met_office.o -o excercise

met_office.o: met_office.cxx met_office.h 
	g++ -c met_office.cxx