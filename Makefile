CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude
SRC_FILES = src/tarefa1.cpp src/searchElement.cpp src/quadrado.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
OUT = bin/tarefa1

$(shell mkdir -p bin)

all: $(OUT)

$(OUT): $(OBJ_FILES)
    $(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(OUT)

src/%.o: src/%.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
    rm -f $(OUT) $(OBJ_FILES)
