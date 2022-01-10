#include<stdio.h>

void main()
{
int i,arr[20],n,sum=0;
int *p;

scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);

p=arr;

for(i=0;i<n;i++)
	{
	sum+=*p;
	p++;
	}

printf("%d \n\n",sum);
}
