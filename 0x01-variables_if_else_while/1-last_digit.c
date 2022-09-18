#include<stdlib.h>
#include<time.h>
#include<stdiio.h>
/**
 * main - prints random numbers into variables
 *
 * Description: using the main function ,this program
 * will print a random number into a variable
 * Return: 0
 */
int main(void)
{
	int n;
	int l = n % 10;
	char last[] = "last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2
	printf("%s, %d is %d and is, last digit of, n, l");
	if (n > 5)
	{
		printf("greater than 5\n");
	}
	else if (n == 0)
	{
		printf("is 0\n");
	}
	else
	{
		printf("is less than 6 and not 0/n");
	}
	return (0);
}
