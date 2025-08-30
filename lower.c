#include<stdio.h>
void main()
{ 
char lower,cha;
printf("Enter the lower case (a-z)");
scanf("%c",&cha);
lower=cha -32 ;
printf("the lower case of %c is %C",cha,lower);
}

