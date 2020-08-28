#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float money_USD,money_THB;
	printf("Input money dollar(s) USD : ");
	scanf("%f", & money_USD);
	if (money_USD > 0)
	{
		money_THB = 32.5*money_USD;
		printf("%.2f dollar(s) = %.2f baht", money_USD, money_THB);
	}
	else
	{
		printf("You don't have money");
	}
	return 0;
}