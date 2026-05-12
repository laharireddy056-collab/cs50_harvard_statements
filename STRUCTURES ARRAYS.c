#include<stdio.h>
struct student 
{
	int roll;
	char name[10];
	float marks;
	char grade;
};
int main()
{
	int i;
	struct student s[3];
	for(i=0;i<3;i++)
	{
		printf("\n enter student %d  roll",i+1);
		scanf("\n %d",&s[i].roll);
		printf("\n enter student %d name",i+1);
		scanf("\n %s",&s[i].name);
		printf("\n enter student %d marks",i+1);
		scanf("\n %f",&s[i].marks);
		printf("\n enter student %d grade",i+1);
		scanf(" %c", &s[i].grade);
	}
	for(i=0;i<3;i++)
	{
		printf("\n %d \n %s \n %f \n %c\n",s[i].roll,s[i].name,s[i].marks,s[i].grade);
	}
	return 0;
}
