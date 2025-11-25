#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a value");
	scanf("%d",&a);
	b=a++;
	printf("\n Post Increment - b=%d then a=%d",b,a);
	b=++a;
	printf("\n Pre Increment - b=%d then a=%d",b,a);
}
