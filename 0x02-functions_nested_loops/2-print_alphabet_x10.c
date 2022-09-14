#include <main.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void);

{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
