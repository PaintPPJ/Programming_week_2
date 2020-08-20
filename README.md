#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int count = 0;
	unsigned long x, n;
	scanf_s("%lu", &n); // input nature number
	x = 1;
	while (x <= n)
	{
		if (n % x == 0)
		{
			count++;
			printf("%lu ", x);
		}
		x++;
	}
	printf("\n%d numbers", count);
	return 0;
}
