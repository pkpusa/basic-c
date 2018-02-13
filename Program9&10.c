/* Demonstration of pointer operations and macros processing*/

#include <stdio.h>   
#define a 3
#define MAX 3  
#define inc(x) x+1
#define dec(x) x-1

int invSize(int *arr, int size)
{
	int l;
	for(l=0; l<size;l++)
	{
		printf("%d \t",arr[l]);
	}
	printf("\n");
}   

int main()
{          
	int mini,option;
	int inventory[MAX]={21,18,12};
	printf("\nEnter number of mini accounts:");
	scanf("%d",&mini);      
	int *account;//pointer to int    
	account=&mini;//stores the address of number variable     
ab:	printf("\nPress 1 to Increment, 2 for Addition, 3 for Subtraction, 4 to Decrement, 5 to See inventory size, 6 to Exit:\n");
	scanf("%d",&option);
	switch(option)
	{
	    case 1:
		{
			printf("\nAddress of account variable is %u \n",account); /* Increment */
			printf("After increment: Address of account variable is %u \n",inc(account)); 
			goto ab;
		}
		
		case 2:
		{
			printf("\nAddress of account variable is %u \n",account);      
			account=account+a;   //adding 3 to pointer variable  
			printf("After adding 3: Address of account variable is %u \n",account); 
			goto ab;
		}
		
		case 3:
		{
			printf("\nAddress of account variable is %u \n",account);      
			account=account-a; //subtracting 3 from pointer variable  
			printf("After subtracting 3: Address of account variable is %u \n",account); 
			goto  ab;
		}
		
	    case 4:
		{
			printf("\nAddress of account variable is %u \n",account); /* Decrement */
			printf("After decrement: Address of account variable is %u \n",dec(account)); 
			goto ab;
		}
		
		case 5:
		{
			printf("\nInventory size for Micro, Sedan and SUV respectively:\n");
			invSize(inventory,MAX);
			goto ab;
		}
		
		case 6:
		{
			printf("\nThe Program will now exit! \n");
			return 0;
		}
		
		default:
		{
			printf("\nInvalid Input\n");
			goto ab;
		} 
	} 
} 
