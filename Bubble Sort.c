#include<stdio.h>

void main()
{
int i,j,temp,n,a[100];

printf("\n\n Enter No. Of Elements : ");
scanf("%d",&n);

printf("\n Enter Elements : ");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
	{
	for(j=1;j<n-i;j++)
		{
		if(a[j]<a[j-1])
			{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			}
		}
	}

printf("\n Sorted Elements : ");
for(i=0;i<n;i++)
	printf(" %d",a[i]);

printf("\n\n");
}
