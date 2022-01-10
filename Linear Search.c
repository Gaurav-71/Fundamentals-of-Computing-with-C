#include<stdio.h>

void main()
{
int i,n,s,pos,a[20],found='n';
printf("\n\n Enter No. Of Elements : ");
scanf("%d",&n);

printf("\n Enter Elements : ");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);

printf("\n Enter Search Element : ");
scanf("%d",&s);

for(i=0;i<n;i++)
	{
	if(a[i]==s)
		{
		found='y';
		pos=i+1;
		break;				
		}
	}
if(found=='y')
	{
	printf("\n Element Found At Position %d. \n",pos);
	}
else
	{
	printf("\n Element Not Found. \n");
	}
}
