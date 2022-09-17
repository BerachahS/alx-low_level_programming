#include<stdlib.h>
#include<time.h>
#include<stdiio.h>
/**
 * main - prints a variabes n  when it is executed
 * Description: using the main function ,this program
 * will print a variale n and assign it anew value
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2
	l = n % 10;

	if (l > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and 0/n", n, l);
	}
	return (0);
}
