.PHONY: all

all: clean
	g++ -std=c++1y -o drawline.o -c drawline.cpp -Wall -O `pkg-config --cflags --libs opencv`
	g++ -o drawline drawline.o `pkg-config --cflags --libs opencv`

clean:
	rm -f *.o drawline 

