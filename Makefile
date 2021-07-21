CC = g++

SMLF_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

TARGET = bin/main
LIB = lib/main.o
FILE = main.cpp

dev: $(TARGET)
$(TARGET): $(FILE)
	$(CC) -c $(FILE) -o $(LIB)

compile: dev 
	$(CC) $(SMLF_FLAGS) $(LIBR) $(LIB) -o $(TARGET)

clean:
	rm -fr $(TARGET) 
	rm -fr $(LIB)

run: clean compile
	./$(TARGET)

