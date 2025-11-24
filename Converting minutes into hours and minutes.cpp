#include<stdio.h>
int main()
{
	int m,h,r;
	printf("enter minutes");
	scanf("%d",&m);
	h=m/60;
	r=m%60;
	m=r;
	printf("%d Hour(s) %d Minute(s)",h,m);
	return 0;
	
}
