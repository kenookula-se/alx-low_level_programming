#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n=48;
	int l='a';

	while (n<=57)
      	{
		putchar(n);
		n += 1;
	}

	while (l<='f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
