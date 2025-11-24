#include<stdio.h>
int main()
{
	int n,s=0,r=0,temp;
	printf("Enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(temp==s)
	{
	  printf("Palindrome");
    }
    else
	{
	  printf("Not a palindrome");
    }
    return 0;
}
