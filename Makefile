OBJECTS = List.o Node.o main.o OList.o 

main: $(OBJECTS)
	g++ -o main $(OBJECTS)
tests: tests.o OList.o Node.o 
	g++ -o tests tests.o OList.o Node.o 
List.o: List.cpp List.h Node.h
Node.o: Node.cpp Node.h
main.o: main.cpp List.h Node.h
OList.o: OList.cpp OList.h Node.h
tests.o: tests.cpp doctest.h OList.h Node.h

clean:
	rm -f $(OBJECTS) tests.o
