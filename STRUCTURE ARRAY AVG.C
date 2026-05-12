#include<stdio.h>
struct student
{
	int marks;
};
int main()
{
	struct student s[100];
	int n,i,total=0;
	float avg;
	printf("\n enter size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d marks",i+1);
		scanf("%d",&s[i].marks);
		total = total + s[i].marks;
	}
	avg=(float)total/n;
	printf("\n Total = %d \n Average = %f",total,avg);
	return 0;
}
