#include <stdio.h>


void star(int x, int y, int n)
{
	if ((x / n) % 3 == 1 && ((y / n) % 3 == 1))
	{
		printf(" ");
	}
	else
	{
		if (n / 3 == 0)
		{
			printf("*");
		}
		else star(x, y, n / 3);

	}
}
int main()
{
	int num;
	int space;

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			star(i, j, num);
		printf("\n");
	}

	return 0;
}
