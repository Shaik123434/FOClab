#include<stdio.h>
int main()
{
	int n,i,next,a=0,b=1;
	printf("enter the any number :");
	scanf("%d",&n);
	printf("\n the fibonacci series for %d is \n",n);
	for(i=1;i<=n;i++)
	{
		printf("%5d",a);
		next = a + b;
	    a = b;
	    b = next;
	    
    }
	return 0;
}
