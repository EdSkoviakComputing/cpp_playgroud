PROG = yamlreader
CC = g++
CPPFLAGS = -Wall -I/usr/local/include
LDFLAGS = -L/usr/local/lib -lyaml
OBJS = any_of.o

$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
yamlreader.o : yamlreader.cpp yamlreader.h
	$(CC) $(CPPFLAGS) -c yamlreader.cpp
any_of.o: any_of.cpp
	$(CC) $(CPPFLAGS) -c any_of.cpp
