rand: main.c avltree.c
	gcc -o rand main.c avltree.c -I. -Wall

clean:
	rm rand 
