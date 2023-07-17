#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0);{
	printf("the number is postive.\n");
	}
	else if( n == 0 ){
	printf("the number is 0.\n");
	}
	else( n < 0 );
	{
	printf("the number is negative\n");
	}
	
	/* your code goes there */
	return (0);
}
