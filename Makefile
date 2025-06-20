TARGET = pikachu
FILE = index.c
FLAGS = -o

CC = gcc

all:
	$(CC) src/$(FILE) $(FLAGS) $(TARGET)
	cp $(TARGET) /usr/local/bin