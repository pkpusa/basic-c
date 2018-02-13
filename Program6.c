#include<stdio.h>
#include<conio.h>

void mini( int x)
{
	printf("Serial Number = %d\n",x);
	printf("Name = Alto 800\n");
	printf("Cost = Rs.2,00,000\n");
	printf("Mileage = 22\n");
}

void micro ( int *y)
{
	printf("Serial Number = %d\n",*y);
	printf("Name = Indica\n");
	printf("Cost = Rs.4,00,000\n");
	printf("Mileage = 24\n");	
}

void suv ( int z[], int l)
{   

    if(z[l]==3)  
    {
	    printf("Serial Number = %d\n",z[0]);
		printf("Name = Fortuner\n");
		printf("Cost = Rs.30,00,000\n");
		printf("Mileage = 17\n");
		printf("\n");
	}
	if(z[l]==4)  
    {
	    printf("Serial Number = %d\n",z[1]);
		printf("Name = Scorpio\n");
		printf("Cost = Rs.12,00,000\n");
		printf("Mileage = 18\n");
		printf("\n");
	}
	if(z[l]==5)  
    {
	    printf("Serial Number = %d\n",z[2]);
		printf("Name = X5\n");
		printf("Cost = Rs.32,00,000\n");
		printf("Mileage = 19\n");
		printf("\n");
	}
    l++;
    if(l<3)
    {
    suv(z,l);
    }
}
int main()
{
	
	int a=1,b=2,c[3]={3,4,5},option;
	printf("********* CAR DISPLAY SYSTEM *********");
    a: printf("\nPress 1 for Mini, 2 for Micro and 3 for SUV:\n");
    scanf("%d",&option);
    switch(option)
    {
    	case 1:
    		{
    			printf("You have selected Mini:\n");
    			mini(a);
    			goto a;
			}
    	case 2:
    		{
    			printf("You have selected Micro:\n");
    			micro(&b);
    			goto a;
			}
    	case 3:
    		{
    			printf("You have selected SUV:\n");
    			suv(c,0);
    		    goto a;
			}
		default:
		    {
		    	printf("\nInvalid Input\n");
			}						
	}
	getch();
	return 0;
	
	
}


