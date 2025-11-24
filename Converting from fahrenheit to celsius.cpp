#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature in fahrenheit");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("Temperature in celsius-%.2f",c);
}
