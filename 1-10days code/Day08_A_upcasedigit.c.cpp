#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character\n");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'){
		printf("it is an uppercase alphabet");
		}
		else if(ch>='a'&&ch<='z')
		{
			printf("it is an lowercase alphabet");
		}
		
			else if(ch>='0' &&ch<='9') 
		{
			printf("it is a digit");
		}
		else
		{
			printf("special character");
		}
		return 0;
}