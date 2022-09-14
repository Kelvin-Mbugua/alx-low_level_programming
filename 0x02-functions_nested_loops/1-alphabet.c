#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */


int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
