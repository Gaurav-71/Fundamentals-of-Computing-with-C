#include<stdio.h>
#include<math.h>

void main()
{
int a[10][10],i,j,m=0,n=0,trace=0,norm=0;

scanf("%d%d",&m,&n);

for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);

for(i=0;i<m;i++)
	{	
	for(j=0;j<n;j++)
		printf("%d \t",a[i][j]);
	printf("\n");
	}

for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		if(i==j)
			{
			trace+=a[i][j];
			}
		norm=norm+pow(a[i][j],2);
		}
	}
norm=sqrt(norm);
printf(" Trace : %d , Norm : %d ",trace,norm);
}
