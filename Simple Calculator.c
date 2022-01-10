#include<stdio.h>

int main()
{
char ch;
int n1,n2,sum,diff,mul;
float div;
printf("\n\n Enter Operation (+,-,*,/) : ");
scanf("%c",&ch);
printf("\n Enter Numbers : ");
scanf("%d%d",&n1,&n2);
switch(ch)
	{
	case '+':
		sum=n1+n2;
		printf("\n n1 + n2 : %d ",sum);	
		break;
	case '-':
		diff=n1-n2;
		printf("\n n1 - n2 : %d ",diff);	
		break;
	case '*':
		mul=n1*n2;
		printf("\n n1 * n2 : %d ",mul);	
		break;
	case '/':
		if(n2==0)		
			printf("\n Divide By Zero Error. ");				
		else			
			{		
			div=n1/n2;
			printf("\n n1 / n2 : %f ",div);	
			}	
		break;
	}
printf("\n\n");
return 0;
}
