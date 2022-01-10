#include<stdio.h>

int len(char a[])
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
}

void main()
{
int i,l1=0,l2=0,flag=0;;
char c1[50],c2[50];
printf("\n\n Enter 2 Strings :- \n");
printf("\n String 1 : ");gets(c1);
printf("\n String 2 : ");gets(c2);
l1=len(c1);
l2=len(c2);
if(l1!=l2)
	printf("\n Strings Are Unequal.");
else
	{
	for(i=0;i<l1;i++)
		{
		if(c1[i]!=c2[i])
			{
			flag=1;
			break;
			}
		}
	if(flag==1)		
		printf("\n Strings Are Unequal.");		
	else
		printf("\n Strings Are Equal.");
	}

}
