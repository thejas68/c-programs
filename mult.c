#include<stdio.h>
void main()
{ 
int num,i;
printf("----------------Table--------------\n ");
printf("Enter the number u want table of :");
scanf("%d",&num);
for (i=1;i<11;i++)
{ 
printf(" %d * %d = %d \n",num,i,num*i);
}
}


