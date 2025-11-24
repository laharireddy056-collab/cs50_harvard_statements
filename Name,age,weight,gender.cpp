#include<stdio.h>
int main()
{
	int a;
	float w;
	char g,n[100];
	printf("Enter name");
	scanf("%s",&n);
	printf("Enter age");
	scanf("%d",&a);
	printf("Enter weight");
	scanf("%f",&w);
	printf("Enter gender");
	scanf(" %c",&g);
	printf("NAME-%s\nAGE-%d\nWEIGHT-%f\nGENDER-%c",n,a,w,g);
}
