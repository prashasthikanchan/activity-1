#include<stdio.h>
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
fraction compute(fraction f1, fraction f2)
{
    fraction sum;
    int sum_num;
    int sum_den;
    sum.n = (f1.n*f2.d)+(f2.n*f1.d);
    sum.d = f1.d*f2.d;
    return sum;
}
void output(fraction f1, fraction f2, fraction sum)
{
    printf("the sum of the given fractions %d/%d and %d/%d is %d/%d\n",f1.n,f1.d,f2.n,f2.d,sum.n,sum.d);
}
float main()
{
    fraction sum;
    fraction f1,f2;
    f1 = input();
    f2 = input();
    sum = compute(f1,f2);
    output(f1,f2,sum);
    return 0;
}


