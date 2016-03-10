target: main
hello1.o: hello1.c
	gcc hello1.c -o hello1.o -c
hello2.o: hello2.c
	gcc hello2.c -o hello2.o -c
main.o: main.c
	gcc main.c -o main.o -c
hello1: hello1.o
	ar rcs libhello1.a hello1.o
hello2: hello2.o
	gcc -fPIC hello2.c -c -o hello2.o
	gcc -shared hello2.o -o libhello2.so
main: main.o hello1 hello2
	gcc main.o -L. -lhello1 -lhello2 -o main