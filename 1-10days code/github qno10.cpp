#include<stdio.h>
int main()
{
	int h,m,s;
	printf("enter time in seconds:");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("Hours:%d\n",h);
	printf("minutes:%d\n",m);
	printf("seconds:%d\n",s);
	return 0;
}