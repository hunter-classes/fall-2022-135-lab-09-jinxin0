main: main.o funcs.o 3d-space.o
	g++ -o main main.o funcs.o 3d-space.o

tests: tests.o funcs.o 3d-space.o
	g++ -o tests tests.o funcs.o 3d-space.o

3d-space.o: 3d-space.cpp 3d-space.h

funcs.o: funcs.cpp funcs.h 3d-space.h

main.o: main.cpp funcs.h 3d-space.h

tests.o: tests.cpp doctest.h funcs.h 3d-space.h

clean:
	rm -f main.o funcs.o tests.o
