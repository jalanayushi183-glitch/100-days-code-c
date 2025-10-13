//Write a program to calculate simple and compound interest for given principal, rate, and time.


#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,CI,SI;
	printf("enter principal");
	scanf("%f",&p);
	printf("enter rate");
	scanf("%f",&r);
	printf("enter time");
	scanf("%f",&t);
	SI=(p*r*t)/100;
	printf("simple interest:%f\n",SI);
	CI=p*pow((1+r/100),t)-p;
	printf("compound interest:%f",CI);
	return 0;
}