CC = g++

SMLF_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

TARGET = bin/main
LIB = lib/main.o
FILE = main.cpp

dev: $(TARGET)
$(TARGET): $(FILE)
	$(CC) -c $(FILE) -o $(LIB)

compile: dev 
	$(CC) $(LIB) -o $(TARGET) $(SMLF_FLAGS)

clean:
	rm -fr $(TARGET) 
	rm -fr $(LIB)

run: clean compile
	./$(TARGET)

