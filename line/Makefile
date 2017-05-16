.PHONY: all

all: clean
	g++ -std=c++1y -o win.o -c win.cpp -Wall -O `pkg-config --cflags --libs opencv`
	g++ -o win win.o `pkg-config --cflags --libs opencv`

clean:
	rm -f *.o win 

