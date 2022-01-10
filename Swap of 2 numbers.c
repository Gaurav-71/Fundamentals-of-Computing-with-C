#include<stdio.h>

void main()
{
int a,b,temp;
int *p,*q;
printf("\n\n Enter 2 Numbers : ");
scanf("%d %d",&a,&b);
printf("\n Numbers Before Swapping : %d %d",a,b);
p=&a;
q=&b;
temp=*p;
*p=*q;
*q=temp;
printf("\n Swapped Numbers : %d %d \n\n",a,b);
}
