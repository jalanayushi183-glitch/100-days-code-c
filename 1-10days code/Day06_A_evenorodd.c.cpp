//Write a program to input an integer and check whether it is even or odd using if–else.


#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if (n%2==0){
		printf("the number is even");
	}
	else{
		printf("the number is odd");
		
	}
	return 0;
}