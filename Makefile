CXX = g++
CXXFLAGS = -Wall -std=c++11
SRC_FILES = src/tarefa1.cpp src/searchElement.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
OUT = bin/tarefa1

$(shell mkdir -p bin)

all: $(OUT)

$(OUT): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -Iinclude $(OBJ_FILES) -o $(OUT)

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -Iinclude -c $< -o $@

clean:
	rm -f $(OUT) $(OBJ_FILES)
