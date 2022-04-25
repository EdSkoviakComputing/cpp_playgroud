PROG = yamlreader
CC = g++
CPPFLAGS = -Wall -I/usr/local/include
LDFLAGS = -L/usr/local/lib -lyaml
OBJS = yamlreader.o

$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
yamlreader.o : yamlreader.cpp yamlreader.h
	$(CC) $(CPPFLAGS) -c yamlreader.cpp
