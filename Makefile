.PHONY: all

all: clean
	g++ -std=c++1y -o pro.o -c pro.cpp -Wall -O `pkg-config --cflags --libs opencv`
	g++ -o pro pro.o `pkg-config --cflags --libs opencv`

clean:
	rm -f *.o pro
