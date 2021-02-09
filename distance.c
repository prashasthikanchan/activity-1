//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int coordinates()
{
int a;
scanf("%d",&a);
}
int distance(x1,x2,y1,y2)
{
int x,y,dist;
x= x2-x1;
y= y2-y1;
dist = sqrt(pow(x,2) + pow(y,2));
return dist;
}
void output(int dist)
{
printf("the distance between the given points is %d",&dist);
}
int main()
{
int x1,x2,y1,y2,d;
printf("enter the the value of x1:");
x1 = coordinates();
printf("enter the value of x2:");
x2 = coordinates();
printf("enter the value of y1:");
y1 = coordinates();
printf("enter the value of y2:");
y2 = coordinates();

d = distance(x1,x2,y1,y2);
output(d);
return 0;
}
