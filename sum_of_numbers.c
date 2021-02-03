//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input()
{
int a;
  printf("Enter number");
  scanf("%d",&a);
  return a;
}
int sum_of_num(int a , int b)
{
	int sum;
  sum = a+b;
  return sum;
}
void output(int a , int b , int c)
{
  printf("sum of %d and %d is %d",a,b,c);
}
int main()
{
int x , y ,z;
  x = input();
  y = input();
  z = sum_of_num(x,y);
  output(x,y,z);
  return 0;
}

