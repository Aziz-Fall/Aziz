run : main
	./main

main : main.o biniaire.o
	gcc -o main *.o -Wall -g

main.o: main.c
	gcc -c main.c

biniaire.o: biniaire.c biniaire.h
	gcc -c biniaire.c

clean: 
	rm -r *.o
	rm -r main
	clear
	ls -l
