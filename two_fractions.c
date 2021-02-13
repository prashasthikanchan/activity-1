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
float compute_n(fraction f1, fraction f2)
{
float sum_num;
sum_num = (f1.n*f2.d)+(f2.n*f1.d);
return sum_num;
}
float compute_d(fraction f1, fraction f2)
{
float sum_den;
sum_den = f1.d*f2.d;
return sum_den;
}
float main()
{
float sum_of_num,sum_of_den;
fraction f1,f2;
f1 = input();
f2 = input();
sum_of_num = compute_n(f1,f2);
sum_of_den = compute_d(f1,f2);
printf("the sum of the given fractions %f/%f and %f/%f is %f/%f\n",f1.n,f1.d,f2.n,f2.d,sum_of_num,sum_of_den);

return 0;
}
