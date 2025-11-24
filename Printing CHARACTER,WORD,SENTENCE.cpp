#include<stdio.h>
int main()
{
	char ch,word[50],sentence[100];
	printf("Enter a single character");
	scanf("%c",&ch);
	printf("Enter a word");
	scanf("%s",&word);
	printf("Enter a sentence");
	scanf(" %[^\n]",&sentence);
	printf("\nThe character is : %c",ch);
	printf("\nThe word is : %s",word);
	printf("\nThe sentence is :  %s",sentence);
}
