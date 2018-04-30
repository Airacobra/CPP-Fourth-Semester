NAZWA=Wyjatki2
CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-g

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: $(NAZWA)

$(NAZWA): $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@
	@echo wywoluje g++
.PHONY: clean run

clean:
	@rm -f $(NAZWA) $(OBJ) $(DEP)

run: $(NAZWA)
	@./$(NAZWA)
valgrind: $(NAZWA)
	@valgrind --leak-check=full ./$(NAZWA)
gdb: Mapa
	@gdb ./$(NAZWA)
-include $(DEP)
