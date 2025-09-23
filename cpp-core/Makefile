# Makefile 放在 cpp-core/ 目录下

CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = finance-tracker

SRC = main.cpp expense.cpp
OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)
