OBJECTS = List.o Node.o main.o 

main: $(OBJECTS)
	g++ -o main $(OBJECTS)

List.o: List.cpp List.h Node.h
Node.o: Node.cpp Node.h
main.o: main.cpp List.h Node.h

clean:
	rm -f $(OBJECTS)
