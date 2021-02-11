//WAP to find the sum of two fractions.
#include<stdio.h>
#include<math.h>
struct value
{
int n;
int d;
};
typedef struct value fraction;
fraction input()
{
fraction f;
printf("enter the value of numerator:");
scanf("%d",&f.n);
printf("enter the value of denominator:");
scanf("%d",&f.d);
return f;
}
float compute(fraction f1, fraction f2)
{
float sum;
sum = ((f1.n/f1.d)+(f2.n/f2.d));
return sum;
}
void output(float sum_of_num)
{
printf("the sum of the given fractions is %f\n",sum_of_num);
}
float main()
{
float sum_of_num;
fraction f1,f2;
f1 = input();
f2 = input();
sum_of_num = compute(f1,f2);
output(sum_of_num);
return 0;
}
