#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i,l=0;
	printf("Enter any string");
	gets(a);
	printf("Enter any string");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;b[i]!='\0';l++,i++)
	{
		a[l]=b[i];
	}
	printf("\n After concatinate %s",a);
	return 0;
}
