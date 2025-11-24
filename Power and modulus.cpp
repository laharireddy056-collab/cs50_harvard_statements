#include<stdio.h>
int main()
{
	int x,y,m,a;
	printf("x,y,m-");
	scanf("%d%d%d",&x,&y,&m);
	a=pow(x,y)%m;
	printf("%d",a);
	return 0;
}
