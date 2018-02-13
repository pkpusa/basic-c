/* Implementation of the storage types */

#include<stdio.h>
int num = 1500000;

int main()
{   
	int option;
	void display();
	/* Input Option */
	a: printf("\nPress 1 for auto, 2 for static, 3 for register, 4 for extern and 5 to exit: ");
	scanf("%d",&option);
	switch(option)
	{
		/* Auto Storage Class */
		case 1:
			{
				printf("\n*****You have selected auto*****\n");   
				auto int a=500000; 
				printf("\nCost for Mini Car is : %d\n",a); 
				goto a;
			}
		/* Static Storage Class */
		case 2:
			{
				printf("\n*****You have selected static*****\n"); 
				static int a=700000; 
				printf("\nCost for Micro Car is : %d\n",a); 
				goto a;
			}
		/* Register Storage Class */
		case 3:
			{
				printf("\n*****You have selected register*****\n");
				register int a=1000000; 
				printf("\nCost for Sedan Car is : %d\n",a); 
				goto a;
			}
		/* Extern Storage Class */
		case 4:
			{
				printf("\n*****You have selected extern*****\n");
		        display();
				goto a;
			}
		/* Exit */
		case 5:
			{
				goto b;
			}
		/* Invalid Input */
		default:
			{
				printf("\n*****Invalid Input*****\n");
				goto a;
			}
	}
	getch();
	b: return 0;
}

void display()
{
	extern int num;
	printf("\nCost for SUV Car is : %d\n",num);
}

