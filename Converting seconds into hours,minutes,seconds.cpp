#include<stdio.h>
int main()
{
	int s,h,m,sec;
	printf("enter seconds");
	scanf("%d",&s);
	h=s/3600;
	m=(s%3600)/60;
	sec=s%60;
	printf("H:M:S-%d:%d:%d",h,m,sec);
	return 0;
}
