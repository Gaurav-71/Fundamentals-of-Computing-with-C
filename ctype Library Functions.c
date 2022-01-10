#include<stdio.h>
#include<ctype.h>

int main()
{
char ch;
printf("\n\n Enter Character : ");
scanf("%c",&ch);
if(isalpha(ch))
	printf("\n The Character Is an Alphabet.");	
if(isdigit(ch))
	printf("\n The Character Is a Digit.");
if(ispunct(ch))
	printf("\n The Character Is a Punctuation.");
if(isspace(ch))
	printf("\n The Character Is a Space.");
printf("\n\n");
return 0;
}
