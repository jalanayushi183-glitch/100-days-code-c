//Write a program to input a character and check whether it is a vowel or consonant using if–else.



#include<stdio.h>
int main()
{
	char A;
	printf("enter a character");
	scanf("%c",&A);
	if (A=='a'||A=='e'||A=='i'||A=='o'||A=='u'){
		printf("it is a vowel \n");
}
else{
	printf("it is a consonant\n");
}
return 0;
}
