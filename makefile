# CC = compiler
CC=gcc
#CFLAGS	= flags for compiler
CFLAGS=-c -Wall

all: MSC

MSC: test.o msc.a
	$(CC) -o MSC test.o -L. msc.a

msc.a: test.o Command.o Memory.o Register.o
	ar cr msc.a Command.o Memory.o Register.o
	
test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp

command.o: Command.cpp
	$(CC) $(CFLAGS) Command.cpp 

memory.o: Memory.cpp
	$(CC) $(CFLAGS) Memory.cpp

registr.o: Register.cpp
	$(CC) $(CFLAGS) Register.cpp

clean:
	rm -rf *.o *.a MSC
