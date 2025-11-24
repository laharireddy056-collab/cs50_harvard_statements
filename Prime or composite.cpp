#include<stdio.h>
int main()
{
	int n,count=0,i,j;
	printf("Enter n value");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
		 {
			count++;
	   	}
	    }
		if(count==2)
		{
			printf("\n%d IS A PRIME NUMBER",i);
		}
		else
		{
			printf("\n%d IS A COMPOSITE NUMBER",i);
		}
	}
	return 0;
}
