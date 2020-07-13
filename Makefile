all: add-nbo

add-nbo: main.o add-nbo.o
	gcc -o add-nbo main.o add-nbo.o

main.o: main.c
	gcc -c -o main.o main.c

add-nbo.o: add-nbo.c
	gcc -c -o add-nbo.o add-nbo.c

clean:
	rm -f add-nbo *.o

