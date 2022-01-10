#include<stdio.h>

void main()
{
int i,n,s,a[100],beg=0,end,mid,flag=0;

printf("\n\n Enter No. Of Elements : ");
scanf("%d",&n);

printf("\n Enter Elements in Ascending Order : ");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);

printf("\n Enter Search Element : ");
scanf("%d",&s);

end=n-1;

while(beg<=end)
	{
	mid=(beg+end)/2;
	if(a[mid]<s)
		beg=mid+1;
		
	else if(a[mid]>s)
		end=mid-1;
	else
		{
		flag=1;
		break;
		}
		
	}
if(flag==1)	
	printf("\n Element Found at %d",mid+1);	
else
	printf("\n Element Not Found.");

printf("\n\n");
}
