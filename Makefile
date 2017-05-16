.PHONY: all

all: clean
	g++ -std=c++1y -o ellipse.o -c ellipse.cpp -Wall -O `pkg-config --cflags --libs opencv`
	g++ -o ellipse ellipse.o `pkg-config --cflags --libs opencv`

clean:
	rm -f *.o ellipse 

