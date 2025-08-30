#include<stdio.h>
#include<ctype.h>
void main()
{
char c;
printf("Enter the character ");
scanf("%c",&c);
if (isalpha(c))
{
printf("The entered  character is alphabet");
}
else if (isdigit(c))
{
printf("The entered character is number");
}
else
printf("Invalid character ");
} 
