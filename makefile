CXXFLAGS=-std=c++11
CXX=g++
PROG=fizzbuzz

all: $(PROG)

$(PROG): $(PROG).o
	$(CXX) $(PROG).o -o $(PROG)

$(PROG).o: fizzbuzz.cpp
	$(CXX) $(CXXFLAGS) -c fizzbuzz.cpp
        
clean:
	rm *.o $(PROG)
