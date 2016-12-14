PROG = yamlreader
CC = g++
CPPFLAGS = -Wall
LDFLAGS = -lyaml
OBJS = yamlreader.o

$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)
yamlreader.o : yamlreader.cpp
	$(CC) $(CPPFLAGS) -c yamlreader.cpp
