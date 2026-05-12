#include<stdio.h>
int partition(int a[],int low,int high);
 void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int location=partition(a,low,high);
		quicksort(a,low,location-1);
		quicksort(a,location+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int start=low;
	int end=high;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}

	swap(&a[end],&a[low]);
	return end;
}
int main()
{
	int n;
	printf("Enter n size-");
	scanf("%d",&n);
	int a[n];
	printf("\n Enter %d element-",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("\n After sorting-");
	for(int i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	return 0;
}
