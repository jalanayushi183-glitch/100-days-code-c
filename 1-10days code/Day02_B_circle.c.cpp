#include<stdio.h>
int main()
{
	float radius,area,circumference;
	printf("enter the value of radius");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("area of circle is:%f\n",area);
	circumference=2*3.14*radius;
	printf("circumference of circle is:%f\n",circumference);
	return 0;
}