#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("Enter any string");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	printf("UPPERCASE STRING IS %s",a);
	return 0;
}
