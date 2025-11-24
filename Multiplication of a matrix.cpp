#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],i,j,k,r1,c1,r2,c2,m[50][50];
	printf("Enter rows and colums");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\n Enter values at a[%d][%d]position",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\n Enter values at b[%d][%d]position",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	if(c1==r2)                      
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				m[i][j]=0;                                           
				for(k=0;k<c1;k++)
				{
					m[i][j]=m[i][j]+a[i][k]+b[k][j];
				}
			}
		}
	}
	else
	{
		printf("\n Matrix multiplication is not possible");
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\tn %d",m[i][j]);
		}
		printf("\n");
	}                  
	return 0;
}                                                                                                             
