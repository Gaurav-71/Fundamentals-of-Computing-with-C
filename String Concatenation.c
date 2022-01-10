#include<stdio.h>

int len(char a[])
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
}

void concat(int l1,int l2,char a[],char b[])
{
int i,l3=0;;
a[l1]=' ';
l1++;
for(i=0;i<l2;i++)
	{
	a[l1+i]=b[i];
	}
l3=l1+l2;
a[l3]='\0';
}

void main()
{
int l1=0,l2=0;
char a[20],b[20];
printf("\n\n Input Strings :- \n");
printf("\n\t String 1 : ");gets(a);
printf("\n\t String 2 : ");gets(b);
l1=len(a);
l2=len(b);
concat(l1,l2,a,b);
printf("\n Concatenated Strings : %s",a);
printf("\n\n");
}
