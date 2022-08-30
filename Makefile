CC := gcc
SRCDIR := src
TARGET := bin/run

.DEFAULT_GOAL = all

all: clean build leak run

build:
	@gcc main.c src/customer/*c src/log/*c src/utils/*c src/mock/*c -o bin/main;

clean:
	@$(RM) -r $(TARGET)

run:
	@./bin/main;

leak:
	@valgrind --leak-check=full --show-leak-kinds=all bin/main;