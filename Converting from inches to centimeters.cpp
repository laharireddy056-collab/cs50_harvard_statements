#include<stdio.h>
int main()
{
	int i;
	float c;
	printf("enter length in inches");
	scanf("%d",&i);
	c=2.54*i;
	printf("%.2f",c);
}
