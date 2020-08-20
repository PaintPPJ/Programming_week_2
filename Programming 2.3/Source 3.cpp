#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x[10];
	int count;
	count = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("x%d = ", i+1);
		scanf_s("%d", &x[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (x[i] % 2 == 0)
		{
			count++;
			break;
		}
	}
	if (count != 0)
	{
		printf("have even number(s)");
	}
	else
	{
		printf("haven't even number(s)");
	}
	return 0;
}