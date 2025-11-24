#include<stdio.h>
#include<stdio.h>
int main()
{
	float p,r,t,SI,CI;
	printf("Enter p,r,t values");
	scanf("%f %f %f",&p,&r,&t);
	SI=(p*r*t)/100;
	CI=p*(pow(1+r/100,t));
	printf("\n Simple Interest=%.3f \n Compound Interest=%.3f",SI,CI);
}
