#include<stdio.h>
#define max
int queue[max];
int rear=-1;
int front=-1;
void enqueue()
{
	int a;
	if(rear==max-1)
	{
		printf("\n Overflow");
	}
	else
	{
		printf("\n Enter element-");
		scanf("%d",&a);
		if(rear==-1 && front==-1)
		{
			rear=front=0;
			queue[rear]=a;
		}
		else
		{
			rear++;
			queue[rear]=a;
		}
	}
}
void dequeue()
{
	int temp;
	if(front==-1)
	{
		printf("\n Underflow");
	}
	else if(rear==front)
	{
		temp=queue[front];
		printf("\n The dequeued element is %d",temp);
		rear=front=-1;
	}
	else
	{
		temp=queue[front];
		printf("\n The dequeued element is %d",temp);
		front++;
	}
}
void peek()
{
	if(front==-1)
	{
		printf("\n Underflow");
	}
	else
	{
		printf("The front element=%d",queue[front]);
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("\n Underflow");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n %d",queue[i]);
		}
	}
}
int main()
{
	int choice,ch=1;
	while(ch)
	{
		printf("\n 1.enqueue()\n2.dequeue()\n3.peek()\n4.display()");
		printf("\n Enter your choice-");
		scanf("%d",&choice);
		switch(choice)
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		default:
			printf("\n Invalid Option");
	}
	printf("\n Do you need another option-");
	scanf("%d",&ch);
return 0;
}
