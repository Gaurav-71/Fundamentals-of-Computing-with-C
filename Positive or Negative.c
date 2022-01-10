#include<stdio.h>

int main()
{
int n;
printf("\n\n Enter Number : ");
scanf("%d",&n);
(n>=0)?((n>0)?(printf("\n The Number Is positive.")):	(printf("\n The Number Is Zero."))):(printf("\n The Number Is Negative."));
printf("\n\n");
return 0;
}
