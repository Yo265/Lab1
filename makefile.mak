# CC = compiler
CC=gcc
#CFLAGS	= flags for compiler
CFLAGS=-c -Wall

all: MSC

MSC: test.o msc.a
	$(CC) -o MSC test.o -L. msc.a

msc.a: test.o command.o memory.o flags.o
	ar cr msc.a command.o memory.o flags.o
	
test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp

command.o: Command.cpp
	$(CC) $(CFLAGS) Command.cpp

memory.o: Memory.cpp
	$(CC) $(CFLAGS) Memory.cpp

registr.o: Registr.cpp
	$(CC) $(CFLAGS) Registr.cpp

clean:
	rm -rf *.o *.a MSC