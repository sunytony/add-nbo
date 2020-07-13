all: add-nbo

add-nbo: add-nbo.o main.o
	gcc -o add-nbo main.o add-nbo.o

main.o: main.c
	gcc -o main.o main.c

add-nbo.o: add-nbo.c
	gcc -o add-nbo.o add-nbo.c

clean:
	rm -f add-nbo *.o

