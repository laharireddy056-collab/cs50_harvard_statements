#include<stdio.h>
int main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("VOWEL");
	}
	else
	{
		printf("CONSONANT");
	}
	return 0;
	
	}
