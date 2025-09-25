#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("ater swapping value of a is %d\n",a);
	printf("after swapping value of b is %d\n",b);
	return 0;
}