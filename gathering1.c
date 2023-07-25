#include<stdio.h>

fact(int num)
{
	int factorial=1;
	if(num<=0)
	{
		return 1;
	}
	else
	{
		factorial = num*fact(num - 1);
	}
	return factorial;
}
int main()
{
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	printf("fectorial = %d",fact(n));
}
