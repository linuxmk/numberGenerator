#include "avltree.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc , char *argv[] )
{
	
    	AvlTree T;
       	register unsigned int loop;
	int r,a,b;
	unsigned long long int number;

	if(argc != 2)
	{
		fprintf(stdout, "usage: %s numbers_to_generate  (ex %s 100000)\n",argv[0], argv[0]);
		exit(1);
	}

	loop = atoi(argv[1]);
	
	T = MakeEmpty( NULL );
 	srand(time(0));

	for (; loop != 0 ; --loop) 
	{
        
		r = (rand() % 89999 ) + 10000;
		a = (rand() % 89999 ) + 10000;
		b = (rand() % 89999 ) + 10000;
		number = (r * 10000000000) + ( a * 100000) + b;
		T = Insert( number, T );
        }

    return 0;
}
