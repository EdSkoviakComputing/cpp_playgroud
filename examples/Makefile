PROG = any_of
CC = g++
CPPFLAGS = -Wall -I/usr/local/include -std=c++2a
LDFLAGS = -L/usr/local/lib -lyaml
OBJS = any_of.o

$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
	
any_of.o: any_of.cpp
	$(CC) $(CPPFLAGS) -c any_of.cpp

readfile : readfile.cxx
	$(CC) $(CPPFLAGS) -o build/$@ $?
