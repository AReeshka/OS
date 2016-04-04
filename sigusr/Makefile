all : sigusr
sigusr : sigusr.o
	gcc sigusr.o -o sigusr
sigusr.o : sigusr.c
	gcc -c sigusr.c -o sigusr.o
clean :
	rm -f sigusr.o sigusr
