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
printf("enter the value of numerator:");
scanf("%f",&f.n);
printf("enter the value of denominator:");
scanf("%f",&f.d);
return f;
}
float compute(fraction f1, fraction f2)
{
float sum, fff1, fff2;
sum = ((f1.n/f1.d)+(f2.n/f2.d));

return sum;
}
void output(fraction f1, fraction f2, float sum_of_num)
{
printf("the sum of the given fractions %f/%f and %f/%f is %f\n",f1.n,f1.d,f2.n,f2.d,sum_of_num);
}
float main()
{
float sum_of_num;
fraction f1,f2;
f1 = input();
f2 = input();
sum_of_num = compute(f1,f2);
output(f1,f2,sum_of_num);
return 0;
}

