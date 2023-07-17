#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main goes here
 *  Return: always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is postive.\n");
	} else if (n == 0)
	{
		printf("The number is 0.\n");
	} else(n < 0);
	{	
		printf("The number is negative\n");
	}
	/* your code goes there */
	return (0);
}
