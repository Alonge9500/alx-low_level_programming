#include <stdio.h>

/**
 *main: insomia
 *
 * Return: Always 0
 */
int main(void)
{
	char lett ='a';
	char lett2 = 'A';

	while (lett <= 'z')
	{
		putchar(lett);
		lett++;
	}
	while (lett2 <='Z')
	{
		putchar(lett2);
		lett2++;
	}
	putchar('\n');
	
	return (0);
}
