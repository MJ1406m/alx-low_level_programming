#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-Entry
 * Return:Always 0
 */
{	
        int n;
        int a;
        
        strand(time(0));
        n = rand() - RAND_MAX / 2;
        a = n % 10;
        
        if (a > 5)
        {       
                printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
        else
	{	
		printf("Last digit of %d id %d and is less than 6 not 0\n", n, a);

	return (0);
}	