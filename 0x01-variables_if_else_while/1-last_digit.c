#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a number and check its last digit, compare with 5
 * Return: 0
 */
int main(void)
{
int n;
int mlast;

srand(time(0));
n = rand() - RAND_MAX / 2;

mlast = n % 10;
printf("Last digit of %d is %d ", n, mlast);

if (mlast > 5)
	printf("and is greater than 5\n");
else if (mlast == 0)
	printf("and is 0\n");
else if (mlast < 6 && mlast != 0)
	printf("and is less than 6 and not 0\n");
return (0);
}
