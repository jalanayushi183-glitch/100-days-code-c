//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three sides of a triangle");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b&&a==c)
	{
		printf("it is a equilateral triangle");
	}
	else if (a==b||a==c)
	{
		printf("it is a isoceles triangle");
	}
	else
	{
		printf("it is a scalene triangle");
	}
	return 0;
}