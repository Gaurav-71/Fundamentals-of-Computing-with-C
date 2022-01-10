#include<stdio.h>

struct student
{
int rno;
int marks[3];
char name[30];
//char subj[20][3];
}s[3];

void main()
{
int i,j;

printf("\n ---- Subject Details ----");
printf("\n\n Subject 1 : Maths");
printf("\n Subject 2 : Chemistry");
printf("\n Subject 3 : Physics ");

printf("\n\n ---- Input Details ----");
for(i=0;i<3;i++) // input
	{
	printf("\n\n Enter Details For Student %d :-",i+1);
	printf("\n\t Enter Student Name : ");scanf("%s",s[i].name);
	printf("\t Enter Roll Number : ");scanf("%d",&s[i].rno);
	for(j=0;j<3;j++)
		{
		printf("\t Enter Marks For  Subject %d : ",j+1);
		scanf("%d",&s[i].marks[j]);			
		}
	}

printf("\n\n ---- Student Details ----");
for(i=0;i<3;i++) // display
	{
	printf("\n\n Details For Student %d :-",i+1);
	printf("\n\t Student Name : ");puts(s[i].name);
	printf("\t Roll Number : ");printf("%d",s[i].rno);
	for(j=0;j<3;j++)
		{
		printf("\n\t Marks For  Subject %d : ",j+1);
		printf("%d",s[i].marks[j]);			
		}
	}
printf("\n\n");
}

