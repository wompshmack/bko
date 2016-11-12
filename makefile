# build an executable named myprog from myprog.c
CC = g++
CFLAGS = 


all: main.o
	$(CC) $(CFLAGS) -o bko -lsfml-graphics -lsfml-window -lsfml-system main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean: 
	