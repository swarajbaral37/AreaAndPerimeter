#include<stdio.h>
#include<conio.h>
int main()
{
float radius,area,perimeter;
clrscr();
printf("enter the radius");
scanf("%f",&radius);
area=3.14*radius*radius;
perimeter=2*3.14*radius;
printf("area of the circle=%f",area);
printf("perimeter of the circle=%f",perimeter);
getch();
return 0;
}
