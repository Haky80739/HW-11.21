#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number[9];
	int con = 9;
	int i;
	int j;
	int a;
	int n;

	for (n = 0; n < 9; n++)
	{
		number[n] = 0;
	}

	printf("¿—A“ü9ŒÂÉš\n");
	scanf_s("%d %d %d %d %d %d %d %d %d", &number[1], &number[2], &number[3], &number[4], &number[5], &number[6], &number[7], &number[8], &number[9]);

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < con; j++)
		{
			if (number[j] > number[j + 1])
			{
				a = number[j];
				number[j] = number[j + 1];
				number[j + 1] = a;
			}
		}
		j--;
	}

	printf("%d %d %d %d %d %d %d %d %d\n", number[1], number[2], number[3], number[4], number[5], number[6], number[7], number[8], number[9]);

	system("pause");
	return 0;
}