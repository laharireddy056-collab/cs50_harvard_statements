#include<stdio.h>
int main()
{
	int n,x=0,y=1,z;
	printf("Enter number of places");
	scanf("%d",&n);
	do
	{
		z=x+y;
		printf("\t%d",z);
		x=y;
		y=z;
		z--;
	}
	while(n-2>0);
	return 0;
	
}
