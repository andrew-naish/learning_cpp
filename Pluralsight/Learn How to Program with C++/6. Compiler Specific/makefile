CC = g++
CFLAGS = -c -Wall -Iinclude
SUBDIR = src/

all: simple

simple: $(SUBDIR)account.o $(SUBDIR)transaction.o $(SUBDIR)simpleClasses.o
	g++ $(SUBDIR)account.o $(SUBDIR)transaction.o $(SUBDIR)simpleClasses.o -o simpleClasses

account.o: $(SUBDIR)account.cpp $(SUBDIR)headers/account.hpp $(SUBDIR)headers/transaction.hpp
	$(CC) $(CFLAGS) $(SUBDIR)account.cpp

transaction.o: $(SUBDIR)transaction.cpp $(SUBDIR)headers/transaction.hpp
	$(CC) $(CFLAGS) $(SUBDIR)transaction.cpp

simpleClasses.o: $(SUBDIR)simpleClasses.cpp $(SUBDIR)headers/account.hpp
	$(CC) $(CFLAGS) $(SUBDIR)simpleClasses.cpp