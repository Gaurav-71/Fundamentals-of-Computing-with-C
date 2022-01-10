#include<stdio.h>

void inp(int m,int n,int arr[][n])
{
int i,j;
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&arr[i][j]);
}

void disp(int m,int n,int arr[][n])
{
int i,j;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		printf(" %d ",arr[i][j]);
	printf("\n");
	}
}

void add(int m,int n,int a1[][n],int a2[][n],int a3[][n])
{
int i,j;
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		a3[i][j]=a1[i][j]+a2[i][j];

}

void main()
{
int m,n,a[10][10],b[10][10],c[10][10];
printf("\n\n Enter Order Of Matrix : ");
scanf("%d %d",&m,&n);
printf("\n Input Matrix 'a' :- \n\n");
inp(m,n,a);
printf("\n Input Matrix 'b' :- \n\n");
inp(m,n,b);
printf("\n Matrix 'a' :- \n\n");
disp(m,n,a);
printf("\n Matrix 'a' :- \n\n");
disp(m,n,b);
add(m,n,a,b,c);
printf("\n Sum :- \n\n");
disp(m,n,c);
printf("\n\n");
}

