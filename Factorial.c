#include<stdio.h>

int factorial(int n)
{
int i,f=1;
for(i=n;i>0;i--)
	{
	f*=i;
	}
return f;
}

void main()
{
int n,fact;
printf("\n\n Enter Number : ");
scanf("%d",&n);
fact=factorial(n);
printf("\n Factorial of %d is %d.\n\n",n,fact);
}
