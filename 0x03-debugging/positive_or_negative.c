#include <main.h>
/*
 * positive_or_negative - checks for positive or negativenumbers
 *
 * @i: the nember to be checked
 *
 * Return: always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		print("%d is negative\n", i);
	else
		print("%d is positive\n", i);
}

