TARGET = pikachu
FILE = index.c
FLAGS = -o

CC = gcc

all:
	$(CC) src/$(FILE) $(FLAGS) $(TARGET)

install: 
	cp $(TARGET) /usr/local/bin