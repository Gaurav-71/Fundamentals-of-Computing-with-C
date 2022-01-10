#include<stdio.h>
#include<math.h>

int i,j;

void inp(int m,int n,int a[][n])
{
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
}

void disp(int m,int n,int a[][n])
{
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		printf("%d \t",a[i][j]);
	printf("\n");
	}
}


void transpose(int m,int n,int a[][n],int b[][m])
{
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		b[j][i]=a[i][j];
}

void main()
{
int i,j,m,n,a[10][10],b[10][10];
printf("\n Enter Order : ");
scanf("%d %d",&m,&n);
printf("\n Enter Elements :");
inp(m,n,a);
printf("\n");
printf("\n Entered Matrix : \n");
disp(m,n,a);
printf("\n");
printf("\n Transpose : \n");
transpose(m,n,a,b);
disp(n,m,b);
printf("\n");

}




