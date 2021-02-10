//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point
{
float x;
float y;
};
typedef struct point Point;
Point input()
{
Point p;
printf("enter the value of abscissa");
scanf("%f",&p.x);
printf("enter the value of ordinate");
scanf("%f",&p.y);
return p;
}
float compute(Point p1,Point p2)
{
float dist;
dist = sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
return dist;
}
void output(float dist)
{
printf("the distance between the given points is %f",dist);
}
int main()
{
float distance;
Point p1,p2;
p1 = input();
p2 = input();
distance = compute(p1,p2);
output(distance);
return 0;
}

