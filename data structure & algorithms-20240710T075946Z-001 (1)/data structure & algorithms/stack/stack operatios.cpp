#include<stdio.h>
int stack[20];
int top=-1;
int element;
void pop();
void push();
void display();

int main()
{
	int choice;
	do
	{
		printf("1-PUSH\n2-POP\n3-DISPLAY\n4-EXIT\n");
		printf("select above any one operation:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			default: printf("Invalid Choice\n");
		}
	}while(choice>0&&choice<5);
	return 0;
}
void push()
{
	if(top > 19)
	{
		printf("The Stack is OverFlowing,Push Is not Possible\n");
		return;
	}
	else
	{
		printf("Enter The Element To Be Pushed:");
		scanf("%d",&element);
		top=top+1;
		stack[top]=element;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("The Stack is UnderFlowing,pop is not possible\n");
		return;
	}
	else
	{
		printf("Enter The Element To Be Popeed From Stack:\n");
		scanf("%d",&element);
		top=top-1;
		stack[top]=element;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("The Stack Is Empty\n");
		return;
	}
	else{
		printf("Elements In The Stack From Bottom to Top Are:\n");
		for(i=0;i<=top;i++)	
			printf("%d : %d\n",i,element);
	}
}
