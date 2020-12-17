trainer: *.o
	gcc -o trainer *.o
	
*.o: *.c
	gcc -c *.c

all: trainer

clean:
	rm -f *.o trainer
