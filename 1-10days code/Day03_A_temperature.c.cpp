//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
	float C,F;
	printf("enter the temperature in celsius");
	scanf("%f",&C);
	F=(C*9/5)+32;
	printf("temperature in fahrenheit%f",F);
	return 0;
	
	
}