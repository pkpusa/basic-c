#include<stdio.h>
#include<conio.h>
int main()
{
	int microdemand,minidemand,suvdemand,maxmini,maxmicro,maxsuv,mini,micro,suv,option,option2;
	printf("**********Auto Inventory Filling System**********\n");
	a: printf("\nPress 1 to enter system values, Press 2 to autofill inventory\n");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
	{
	/* Input system values for future validation*/
	printf("Input Demand for Mini:\n");
	scanf("%d",&minidemand);
	printf("Input Demand for Micro:\n");
	scanf("%d",&microdemand);
	printf("Input Demand for SUV:\n");
	scanf("%d",&suvdemand);
    printf("Input Max Inventory Size for Mini:\n");
	scanf("%d",&maxmini);
	printf("Input Max Inventory Size for Micro:\n");
	scanf("%d",&maxmicro);
	printf("Input Max Inventory Size for SUV:\n");
	scanf("%d",&maxsuv);
	printf("******State Saved******\n");
	goto a;
    } 
    case 2:
    	{
    		/*System Autofill Machanism */
    		printf("\nPress 1 to autofill Mini, Press 2 to autofill Micro, Press 3 to autofill SUV:\n");
    		scanf("%d",&option2);
    		switch(option2)
    		{
    			case 1:
    			{
						if(minidemand<=maxmini) /* Validation against maximum size */
    				{
    					while(minidemand<=maxmini)
    					{
    						for(mini=0;mini<minidemand;mini++)
    						{
							}
							break;
						}
						printf("New Mini inventory size: %d",mini);
					}
					else
					{
						printf("\nInvalid Demand\n");
						
					}
					goto a;
			}
			case 2:
    			{
						if(microdemand<=maxmicro)
    				{
    					while(microdemand<=maxmicro)
    					{
    						for(micro=0;micro<microdemand;micro++)
    						{
							}
							break;
						}
						printf("New Micro inventory size: %d",micro);
					}
					else
					{
						printf("\nInvalid Demand\n");
						
					}
					goto a;
			}
			case 3:
    				if(suvdemand<=maxsuv)
    				{
    					do
    					{
    						for(suv=0;suv<suvdemand;suv++)
    						{
							}
							break;
						}while(suvdemand<maxsuv);
						
						printf("New SUV inventory size: %d",suv);
					}
					else
					{
						printf("\nInvalid Demand\n");
						
					}
					goto a;
					default:
						{
							printf("\nInvalid Input\n");
    	goto a;
						}
			}
		}
    default:
    	{
    		/* Invalid Input */
		printf("\nInvalid Input\n");
    	goto a;
    }
}
getch();
return 0;
}
