#include "main.h"
/**
 * _isupper - a function that checks for uppercase characters
 *@c: chars
 * Return: a value of 1 if the variable c contains an upperca
 */
int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
