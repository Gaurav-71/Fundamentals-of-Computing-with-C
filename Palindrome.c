#include<stdio.h>

int n,num,rev=0,rem;

void pal()
{
n=num;
while(n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n/=10;
	}
if(num==rev)
	printf("\n The Number Is A Palindrome.");
else
	printf("\n The Number Is Not A Palindrome.");
}

void main()
{
printf("\n\n Enter Number : ");
scanf("%d",&num);
pal();
printf("\n\n");
}
