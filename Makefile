LIB    = libglfw.a libfmodex64-4.44.14.so
LFLAGS = $(LIB) -lrt -lX11 -lGLU -lGL -pthread -lm -lXrandr 

all: Final

Final: main.o Algorithm.o Levels.o Shapes.o
	g++ main.o Algorithm.o Levels.o Shapes.o -o Final $(LFLAGS)

main.o: main.cpp
	g++ -c main.cpp

AI.o: Algorithm.cpp
	g++ -c Algorithm.h Algorithm.cpp

Winner.o: Levels.cpp
	g++ -c Levels.cpp

HTML.o: Shapes.cpp
	g++ -c Shapes.h Shapes.cpp

clean:
	rm -f *.o *.gch Final
	
	
