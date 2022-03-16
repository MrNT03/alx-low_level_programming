#include "main.h"

/**
 * _islower - checks if the character is lowercase or not
 * @c: takes in character
 * Return: o for uppercase, 1 for loercase
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
