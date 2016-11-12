# build an executable named myprog from myprog.c
CC = g++
CFLAGS = 


all: main.o
	$(CC) $(CFLAGS) -o bko main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean: 
	