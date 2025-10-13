//Write a program to find and display the sum of the first n natural numbers.


#include<stdio.h>
int main()
{
	int n,i,sum;
printf("enter the value of n:");
scanf("%d",&n);

	sum=1;
	for(i=2;i<=n;i++)
	{
		sum=sum+i;
	}
		printf("sum of n natural no is%d",sum);
	

return 0;
}