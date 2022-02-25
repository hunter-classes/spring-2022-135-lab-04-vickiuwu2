main: main.o functions.o 
	g++ -o main main.o functions.o 

main.o: main.cpp functions.h 
	g++ -c main.cpp

box.o: functions.cpp functions.h
	g++ -c functions.cpp

clean:
	rm -f main.o functions.o 