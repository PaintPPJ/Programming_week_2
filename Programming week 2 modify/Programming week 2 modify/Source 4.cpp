#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int money_USD,money_THB;
	printf("Input money dollar(s) USD : ");
	scanf("%d", & money_USD);
	if (money_USD > 0)
	{
		money_THB = 32.5*money_USD;
		printf("%d dollar(s) = %d baht", money_USD, money_THB);
	}
	return 0;
}