//WAP to find the sum of n fractions.
#include<stdio.h>
struct value
{
float n;
float d;
};
typedef struct value fraction;
fraction input()
{
fraction f;
printf("enter the value of numerator:");
scanf("%f",&f.n);
printf("enter the value denominator:");
scanf("%f",&f.d);
return f;
}
float compute()
{
int count;
float a[count];
float sum = 0;
fraction f;
printf("enter the count of numbers to add");
scanf("%d",&count);
for(int i = 0;i<count;i++)
{
f = input();
a[i] = f.n/f.d;
sum = sum + a[i];
}
return sum;
}
void output(float sum)
{
printf("the sum is %f",sum);
}
float main()
{
float sum=0;
sum = compute();
output(sum);
return 0;
}

