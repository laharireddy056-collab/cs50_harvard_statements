#include<stdio.h>
int main()
{
	int units;
	float amount,charge;
	printf("Enter total units consumed-");
	scanf("%d",&units);
	if (units <= 50)
	{
		amount=units*2.50;
		charge=30;
	}
	else if(units<=100)
	{
		amount=units*3.00;
		charge=50;
	}
	else if(units<=200)
	{
		amount=units*3.50;
		charge=75;
	}
	else if(units<=300)
	{
		amount=units*4.00;
		charge=100;
	}
	else
	{
		amount=units*5.00;
		charge=125;
	}
	printf("Electricity Bill-%.2f",amount+charge);
	return 0;
}
