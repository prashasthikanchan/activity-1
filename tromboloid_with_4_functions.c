//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
float a;
scanf("%d",&a);
return a;
}
float vol(float a, float b , float c)
{
int volume;
volume = ((a*b*c)+(c/b))*(1/3);
return volume;
}
void print(int volume)
{
printf("Volume is %d",volume);
}
int main()
{
int  h , b , d, v;
printf("Enter the height: ");
h  = input();
printf("enter the breadth:");
b = input();
printf("enter the depth:");
d = input();
v = vol(h, b, d);
print(h,b,d);
return 0;
}
