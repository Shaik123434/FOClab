#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the any number :");
	scanf("%d",&n);
	printf("\n the number series for %d \n",n);
	for(i = 1;i <= n;i++)
	printf("%5d",i);
	return 0;
}
