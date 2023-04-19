test: main.c
	gcc main.c header.h header.c -o main
	./main