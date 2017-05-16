.PHONY: all

all: clean
	g++ -std=c++1y -o circle.o -c circle.cpp -Wall -O `pkg-config --cflags --libs opencv`
	g++ -o circle circle.o `pkg-config --cflags --libs opencv`

clean:
	rm -f *.o circle

