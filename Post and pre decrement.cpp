#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a value");
	scanf("%d",&a);
	b=a--;
	printf("\n Post Decrement - b=%d then a=%d",b,a);
	b=--a;
	printf("\n Pre Decrement - b=%d then a=%d",b,a);
}
