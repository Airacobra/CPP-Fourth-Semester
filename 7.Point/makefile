.SUFFIXES:
	MAKEFLAGS += -r

.PHONY: all clean

CXX = g++
CXXFLAGS = -Wall -g

all: Punkt

Punkt: $(patsubst %.cpp, %.o, $(wildcard *.cpp))
	$(CXX) $(CXXFLAGS) -o $@ $^
%.o: %.cpp %.dep
	$(CXX) $(CXXFLAGS) -c $<

%.dep: %.cpp
	$(CXX) -MM -MT ${@:.dep=.o} -MF $@ $<
	
include $(wildcard *.dep)


clean:
	rm -f *.o *.dep Punkt

.SECONDARY: