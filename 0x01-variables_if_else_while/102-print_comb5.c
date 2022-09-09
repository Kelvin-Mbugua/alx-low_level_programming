#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int one;
	int ten;

		for (ten = '0'; ten <= '9'; ten++) /*tens=100s+1*/
		{
			for (one = (ten + 1); one <= '9'; one++) /*ones*/
			{
				putchar(ten);
				putchar(one);
				if (ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');

	return (0);
}
