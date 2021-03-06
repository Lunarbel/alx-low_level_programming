#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two-digit numbers.
 * Number should range frim 0 to 99.
 * The two numbers should be separated by space.
 * All numbers should be printed with two digis. 1 should be printed as 01.
 * Combinations of numbers must be separated by a comma followedd by a space.
 * Combinations of numers should be printed in ascending order.
 * `00 01` and `01 00` are considered as the same combination.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 8 times.
 * You are not allowed to usse any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 6))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}

