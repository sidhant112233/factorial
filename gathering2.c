#include<stdio.h>

sum(int p[],int n)
{
	int i,add=0;
	for(i=0;i<n;i++)
	{
		add=add+p[i];
	}
	printf("sum =%d",add);
}
main()
{
	int c[100],i,n;
	printf("Enter array size :");
	scanf("%d",&n);
	printf("Enter value of array=");
	
	for(i=0;i<n;i++)
	{
		printf("c[%d]=",i);
		scanf("%d",&c[i]);
	}
	sum(c,n);
	
}
