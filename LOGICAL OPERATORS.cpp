#include<stdio.h>
int main()
{
	int a=5,b=10,c=15;
	if(a<b&&b<c)
	{
		printf("both conditions are true");
	}
	if(a>b||b<c)
	{
		printf("\none condition is true");
	}
	if(!(a>b))
	{
		printf("\n a is not greater than b");
	}
}
