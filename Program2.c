#include<stdio.h>
#include<conio.h>
int main()
{
	char petrol[200];
	char diesel[200];
	char electric[200];
	int option,option1,option2;
	int microinventory;
	int miniinventory;
	int suvinventory;
	int microdemand;
	int minidemand;
	int suvdemand;
	int microrequest;
	int minirequest;
	int suvrequest;
	printf("Input cars with Petrol fuel type separated by ';':\n");
	gets(petrol);
	getchar();
	printf("Input cars with Diesel fuel type separated by ';':\n");
	gets(diesel);
	getchar();
	printf("Input cars with Electric fuel type separated by ';':\n");
	gets(electric); 
	getchar();
	printf("Input inventory size of Micro\n");
	scanf("%d",&microdemand); 
	printf("Input inventory size of Mini\n");
	scanf("%d",&minidemand);
	printf("Input inventory size of SUV\n");
	scanf("%d",&suvdemand);
b:	printf("\nPress 1 to view cars with different fuel types, Press 2 to book a car:\n");
	scanf("%d",&option);
	switch(option)
	{
	 case 1:
		{
			a: printf("Press 1 for Diesel, 2 for Petrol, 3 for Electric:\n");
			scanf("%d",&option1);
			switch(option1)
			{
			
			case 1:
				{
					puts(petrol);
					goto b;
				}
			case 2:
				{
					puts(diesel);
				     goto b;
				}
			case 3:
				{
					puts(electric);
					goto b;
				}
			default:
			    {
				    printf("Invalid Input\n");
				    goto b;
			    }
			}
			break;
		}

	case 2:
	{
	c: printf("Press 1 for Micro, 2 for Mini, 3 for SUV");
	scanf("%d",&option2);
	switch(option2)
	{
	case 1:
	{
	   printf("Enter number of Micro cars required\n");
	   scanf("%d",&microrequest);
	   if(microrequest<=microinventory)
	   {
	   printf("Car Booked");
}
	   else
	   {
	   printf("Unavailable");
        }
	   goto b;
     }
    case 2:
    {
	   printf("Enter number of Mini cars required\n");
	   scanf("%d",&minirequest);
	   if(minirequest<=miniinventory)
	   {
	   printf("Car Booked");
}
	   else
	   {
	   printf("Unavailable");
        }
       goto b;    
	 }
     case 3:
    {
	   printf("Enter number of SUV cars required\n");
	   scanf("%d",&suvrequest);
	   if(suvrequest<=suvinventory)
	   {
	   printf("Car Booked");
}
	   else
	   {
	   printf("Unavailable");
        }
       goto b; 
	 }
     default:
    {
	   printf("Invalid Input\n");
	   goto c;
     }
     break;
    }

	default:
	    {
	        printf("Invalid Input\n");
	     	goto b;	
     	}  
    }
}
	getch();
}
