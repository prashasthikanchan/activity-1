//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
return num;
}
int compute(int num[n], int n )
{

int sum = 0;
for(int i=0;i<n;i++)
{
printf("enter %d numbers\n",n);
scanf("%d",&num[n]);
sum = sum + num[n];
}
return sum;
}
void output(int sum)
{
printf("the sum is %d",sum);
}
int main()
{
int num,sum;
num = input();
int num[n];
sum = compute(num[n], n);
output(sum);
return 0;
}

