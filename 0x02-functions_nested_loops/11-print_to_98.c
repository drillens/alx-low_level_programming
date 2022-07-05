#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers from var to 98
 *
 * @var: the starting limit
 */

void print_to_98(int var)
{
	int stopLimit = 98;

	if (var > stopLimit)
	{
		int ii;

		for (ii = var; ii >= stopLimit; ii--)
		{
			printf("%d", ii);
			if (ii != stopLimit)
				printf(", ");
		}
	}
	else
	{
		int jj;

		for (jj = var; jj <= stopLimit; jj++)
		{
			printf("%d", jj);
			if (jj != stopLimit)
				printf(", ");
		}
	}
	printf("\n");

}
