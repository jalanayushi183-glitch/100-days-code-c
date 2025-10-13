//Write a program to input three numbers and find the largest among them using if–else.


#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	if (a>b&&a>c){
		printf("a is largest number");
	}
	else if (b>a&&b>c){
		printf("b is largest number");
	}
	else {
		printf("c is largest number");
		
	}
	return 0;
	
}
	
