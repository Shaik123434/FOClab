#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the any number :");
	scanf("%d",&n);
	printf("\n the odd number series for %d \n",n);
	for(i = 1;i <= n;i += 2)
	printf("%5d",i);
	return 0;
}
