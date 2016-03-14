all : cat
cat : cat.o
	gcc -s cat.o -o cat
cat.o : cat.c
	gcc cat.c -o cat.o -c
clean :
	rm -f *o cat
