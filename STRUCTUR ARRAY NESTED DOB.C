#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	struct dob
	{
		int date,month,year;
	}d;
}s;
int main()
{
	printf("\n enter roll number:");
	scanf("%d",&s.roll);
	printf("\n enter name:");
	scanf(" %[^\n]s", &s.name);
	printf("enter date of birth(dd/mm/yy) format:");
	scanf("%d %d %d",&s.d.date,&s.d.month,&s.d.year);
	printf("\n student roll number:%d \nstudent name:%s \nstudent dob:%d/%d/%d",s.roll,s.name,s.d.date,s.d.month,s.d.year);
	return 0;
	
}
