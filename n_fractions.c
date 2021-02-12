//WAP to find the sum of n fractions.
#include<stdio.h>
#include<math.h>
struct value
{
float n;
float d;
};
typedef struct value fraction;
fraction input()
{
fraction f;
float count;
float a[count];
float sum = 0;
printf("enter the value of numerator:");
scanf("%d"&f.n);
printf("enter the value denominator:");
scanf("%d",&f.d);
return f;
}
float compute()
{
fraction f;
int count;
float a[count];
float sum = 0;
printf("enter the count of numbers");
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
sum = input();
output(sum);
return 0;
}



