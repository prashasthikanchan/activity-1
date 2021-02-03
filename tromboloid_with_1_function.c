//Write a program to find the volume of a tromboloid using one function
void main()
{
int h, b, d, volume;
printf("enter the height: ");
scanf("%d",&h);
printf("enter the breadth: ");
scanf("%d",&b);
printf("enter the depth: ");
scanf("%d",&d);
volume = ((h*b*d) + d/b)/3;
printf("Volume of tromboloid is %d",volume);
}

