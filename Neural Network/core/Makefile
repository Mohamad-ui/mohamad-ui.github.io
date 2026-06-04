CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -Wall

SRC = src/main.cpp \
            src/neuron/neuron.cpp

TARGET = brain

all:
		$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: all
		./$(TARGET)

clean:
		rm -f $(TARGET)
