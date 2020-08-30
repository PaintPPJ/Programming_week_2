#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long a;
	int count = 0;
	scanf("%ld", &a); //input nature number
	int long x = 2;
	if (a > 1) {
		while (x * x <= a)
		{
			if (a % x == 0)
			{
				count++;
				break;
			}
			x++;
		}
		if (count == 0)
		{
			printf("%ld is prime number", a);
		}
		else
		{
			printf("%ld isn't prime number", a);
		}
	}
	else
	{
		printf("%ld isn't prime number", a);
	}
	return 0;
}