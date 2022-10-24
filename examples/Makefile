PROG = any_of
CPP = clang++ -stdlib=libc++ -std=c++2a
CPPFLAGS = -Wall -I/usr/local/include
LDFLAGS = -L/usr/local/lib
OBJS = any_of.o

$(PROG) : $(OBJS)
	$(CPP) $(LDFLAGS) -o $(PROG) $(OBJS)
any_of.o: any_of.cpp
	$(CPP) $(CPPFLAGS) -c any_of.cpp

hello.o: hello.cpp
	$(CPP) $(CPPFLAGS) -c hello.cpp

traits : traits.cpp
	$(CPP) -o $@ $?
