#include<stdio.h>
int main()
{
	int f,i,p=1;
	printf("Enter f value");
	scanf("%d",&f);
	for(i=1;i<=f;i++)
	{
		p=p*i;
	}
	printf("\nFactorial of %d=%d",f,p);
	return 0;
}
