SOURCE = main.cpp
BIN = main.exe
OBJ = main.o
CXX = g++
CXXFLAGS = -std=c++17 -Wall -pedantic-errors -g

$(BIN): $(OBJ)
	$(CXX) $(OBJ) -o $(BIN) $(CXXFLAGS)

run: $(BIN)
	$(BIN)

$(OBJ): $(SOURCE)
	$(CXX) -c $(SOURCE) -o $(OBJ) $(CXXFLAGS)