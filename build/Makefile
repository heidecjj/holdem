CC = g++

CFLAGS = -Wall -c -g -std=c++11

## A list of options to pass to the linker. 
LDFLAGS = -Wall -g -std=c++11

## Name the executable program, list source files
PROG = main 
SRCS = driver.c queue.c 
MAIN = ../src/main.cpp
CARDS = ../src/cards.cpp

## Build the program from the object files (-o option)
$(PROG): main.o cards.o
	$(CC) main.o cards.o -o $(PROG) $(LDFLAGS)

main.o: $(MAIN)
	$(CC) $(CFLAGS) $(MAIN)

cards.o: $(CARDS)
	$(CC) $(CFLAGS) $(CARDS)

## Remove all the compilation and debugging files
clean: 
	rm -f core $(PROG) main.o cards.o *~
