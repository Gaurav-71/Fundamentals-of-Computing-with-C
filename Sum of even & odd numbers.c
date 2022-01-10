#include<stdio.h>

void main()
{
int i,n,esum=0,osum=0,sum=0;
printf("\n\n Enter Number Of Elements : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	printf(" %d",i);
	if(i%2==0)
		{
		esum+=i;
		}
	else
		{
		osum+=i;
		}
	sum+=i;
	}
printf("\n Sum : %d , Esum : %d , Osum : %d ",sum,esum,osum);
}
