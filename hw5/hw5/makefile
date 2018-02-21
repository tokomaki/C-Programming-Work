# Justin Victoria
# Professor Xiaohui Liang
# 04/10/2017
# makefile for hw5

cc = gcc
CFLAGS = -m32

all: tail

tail: tail.o lineholder.o
	$(cc) $(CFLAGS) -g -o tail tail.o lineholder.o
tail.o: tail.c lineholder.h
	$(cc) $(CFLAGS) -g -c tail.c lineholder.h
lineholder.o: lineholder.c
	$(cc) $(CFLAGS) -g -c lineholder.c lineholder.h

clean:
	rm *.o
