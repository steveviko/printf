#include "main.h"

/**
 * _putchar - prints a character at a time to screen
 * @c: char parameter
 * Return: 1 or 0
 */

int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints string to terminal
 * @str: str param
 * Return: num of char in str
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
