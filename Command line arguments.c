#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[])
{
	if(argc!=5)
	{
		printf("\n Usage %s:<name><marks1><marks2>marks3",argv[0]);
		return 1;
	}
	char *name=argv[1];
	int m1 = atoi(argv[2]);
	int m2 = atoi(argv[3]);
	int m3 = atoi(argv[4]);
	int total = m1+m2+m3;
	printf("\n name of the program %s",argv[0]);
	printf("\n student name %s",name);
	printf("\n %d %d %d",m1,m2,m2);
	printf("\n total marks : %d",total);
	return 0;
}
