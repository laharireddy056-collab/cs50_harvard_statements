#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("\nEnter temperature in celsius");
	scanf("%f",&celsius);
	fahrenheit=(1.8*celsius)+32;
	printf("\nTEMPERATURE IN FAHRENHEIT = %.3f",fahrenheit);
	return 0;
}
