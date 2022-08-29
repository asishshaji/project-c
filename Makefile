CC := gcc
SRCDIR := src
TARGET := bin/run

.DEFAULT_GOAL = build



build:	
	@$(RM) -r $(TARGET)
	@gcc main.c src/customer/*c src/log/*c src/utils/*c  -o bin/main;
	@./bin/main;
	