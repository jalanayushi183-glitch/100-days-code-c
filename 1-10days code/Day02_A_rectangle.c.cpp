#include<stdio.h>
int main()
{
	int length,breadth,area,perimeter;
	printf("enter the length:");
	scanf("%d",&length);
	printf("enter the breadth:");
	scanf("%d",&breadth);
	area=length*breadth;
	printf("area of rectangle is:%d\n",area);
	perimeter=2*(length+breadth);
	printf("perimeter of rectangle is:%d",perimeter);
	return 0;
	
}