//Write a program to input two numbers and display their sum, difference, product, and quotient-


#include<stdio.h>
int main()
{
	int a,b,sum,difference,product,quotient;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	sum=a+b;
	printf("sum of given two numbers is:%d\n",sum);
	difference=a-b;
	printf("difference of given two numbers is:%d\n",difference);
	product=a*b;
	printf("product of given two numbers is:%d\n",product);
	quotient=a/b;
	printf("quotient of given two numbers is %d\n",quotient);
	return 0;
}