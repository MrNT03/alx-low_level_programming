#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int num;
	char alp;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}

	printf("\n");

	return (0);
}
