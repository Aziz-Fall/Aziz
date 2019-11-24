run: main
	./main

main: main.o vecteur.o
	gcc -o main *.o -g -Wall

main.o: main.c vecteur.h
	gcc -c main.c -g -Wall

vecteur.o: vecteur.h vecteur.c
	gcc -c vecteur.c -g -Wall

clean:
	rm -r *.o
	rm -r main
	clear 
	ls -l