#include<stdio.h>
void main()
{
int a,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("The two numbers before swapping num1= %d,num2=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("The two numbers after swapping num1 =%d num2 =%d",a,b);
}

