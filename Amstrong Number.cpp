#include<stdio.h>
#include<math.h>
int main()
{
	int n,r=0,s=0,count=0,temp;
	printf("Enter n value");
	scanf("%d",&n);
	count=(int)log10(n)+1;
	temp=n;
	while(n>0)
	{
		r=n%10;
		s=s+pow(r,count);
		n=n/10;
	}
	if(temp==s)
	{
		printf("%d IS AN AMSTRONG NUMBER",temp);
    }
    else
    {
    	printf("%d IS NOT AN AMSTORNG NUMBER",temp);
	}
	return 0;
}

