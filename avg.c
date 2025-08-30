#include<stdio.h>
void main()
{
int m1,m2,m3,m4,total,avg;
printf("Enter the marks in 4 subject ");
scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
total=m1+m2+m3+m4;
avg=(total/4);
printf("The total marks in 4 subjects are = %d \n",total);
printf("The average in 4 subjects are = %d \n",avg);
}
