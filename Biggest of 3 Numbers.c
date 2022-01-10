#include<stdio.h>

void main()
{
int n1,n2,n3;
printf("\n\n Input 3 Numbers : ");
scanf("%d%d%d",&n1,&n2,&n3);
(n1>n2)?((n1>n3)?(printf("\n %d Is The Biggest Of The Three.",n1)):(printf("\n %d Is The Biggest Of The Three.",n3))):
	((n2>n3)?(printf("\n %d Is The Biggest Of The Three.",n2)):(printf("\n %d Is The Biggest Of The Three.",n3)));
}
