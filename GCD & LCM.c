#include<stdio.h>

int GCD(int m,int n)
{
int r=1,gcd=0;
while(r!=0)
	{
	r=m%n;
	m=n;
	n=r;
	}
return m;
}

int LCM(int m,int n,int g)
{
int lcm;
lcm=(m*n)/g;
}

void main()
{
int n1,n2,lcm=0,gcd=0;
printf("\n\n Enter The Numbers : ");
scanf("%d %d",&n1,&n2);
gcd=GCD(n1,n2);
lcm=LCM(n1,n2,gcd);
printf("\n GCD : %d , LCM : %d",gcd,lcm);
printf("\n\n");
}
