TARGET = pikachu
FILE = index.c
FLAGS = -o

CC = GCC

all:
	$(CC) src/$(FILE) $(FLAGS) $(TARGET)

install: 
	cp $(TARGET) /usr/local/bin