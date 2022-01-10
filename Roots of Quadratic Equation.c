#include<stdio.h>
#include<math.h>

void main()
{
int a,b,c;
float d,r1,r2,ipart,rpart;
printf("\n\n Enter Non Zero Coeffecients (a,b,c): ");
scanf("%d %d %d",&a,&b,&c);
d=pow(b,2)-4*a*c;
if(d>0)
	{
	printf("\n The Roots Are Real And Distinct.");
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);	
	printf("\n R1 : %f , R2 : %f",r1,r2);
	}
else if(d==0)
	{
	printf("\n The Roots Are Real And Equal.");
	r1=-b/(2*a);
	r2=r1;	
	printf("\n R1 : %f , R2 : %f",r1,r2);
	}
else
	{
	printf("\n The Roots Are Imaginary And Distinct.");
	rpart=-b/(2.0*a);
	ipart=sqrt(fabs(d))/(2.0*a);
	r1=rpart + ipart;
	r2=rpart- ipart;
	printf("\n R1 : %f , R2 : %f",r1,r2);
	}
printf("\n\n");
}
