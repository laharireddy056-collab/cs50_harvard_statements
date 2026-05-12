#include<stdio.h>
struct student 
{
	int marks;
	char name[20];
}s;
int main()
{
	int n,count=0,i;
	printf("Enter no. of students-");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("\n Student-%d",i+1);
		printf("\n Enter name-");
		scanf("%s",&s[i].name);
		printf("\n Enter marks-");
		scanf("%d",& s[i].marks);
		
	}
	for(i=0;i<n;i++)
	{
		if(s[i].marks>50)
		{
			count++;
		}
	}
	printf("\n No. of students who scored above 50 - %d",count);
	return 0;
}
