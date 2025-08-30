#include<stdio.h>
#include<math.h>
void main()
{ 
int a,b,c,d,dis;
printf("Enter the co ordinates of first point ");
scanf("%d%d",&a,&b);
printf("Enter the co ordinates of second point ");
scanf("%d%d",&c,&d);
dis=sqrt(pow(c-a,2)+pow(d-b,2));
printf("the distance between two points is = %d",dis);
}
