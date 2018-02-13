/* Implementation of Multi Dimensional Arrays */
#include <stdio.h>
int main()
{
   int mini[100][100];
   float micro[100][100];
   double suv[100][100];
   int i, j, option, option2, option3;
   printf("********* CAR PROPERTIES INPUTTING PANEL *********");
   a: printf("\nPress 1 to input system values or Press 2 to display system values:\n");
   scanf("%d",&option);
   /* Input car properties here */
   switch(option)
   {
   case 1:
   {
   	   b: printf("\nPress 1 for Mini, 2 for Micro and 3 for SUV:\n");
       scanf("%d",&option2);
       switch(option2)
       {
   case 1:
   	{ 
   // Taking input using nested for loop
   printf("\nEnter Price, Top speed, Mileage for Mini:\n");
   for(i=0, j=0; i<3; i++,j++)
    {
       scanf("%d", &mini[i][j]);
    }
    goto a;
    
    }
    case 2:
    {
   // Taking input using nested for loop
   printf("\nEnter Price, Top speed, Mileage for Micro:\n");
   for(i=0, j=0; i<3; i++,j++)
    {
       scanf("%f", &micro[i][j]);
    }
    goto a;
    }
    case 3:
    {
   // Taking input using nested for loop
   printf("\nEnter Price, Top speed, Mileage for SUV:\n");
   for(i=0, j=0; i<3; i++,j++)
    {
       scanf("%d", &suv[i][j]);
    }
    goto a;
    }
    default:
    {
    	printf("Invalid Input");
    	goto b;
	}
   }
   }
   /* Display car properties from here */
   case 2:
   	{
       c: printf("\nPress 1 for Mini, 2 for Micro and 3 for SUV:\n");
       scanf("%d",&option3);
       switch(option3)
       {
   case 1:
   	{ 
   // Output using nested for loop
   printf("\nBelow are Price, Top speed, Mileage for Mini:\n");
   for(i=0, j=0; i<3; i++,j++)
    {
       printf("%d\n", mini[i][j]);
    }
    goto a;
    }
    case 2:
    {
   // Output using nested for loop
   printf("\nBelow are Price, Top speed, Mileage for Micro:\n");
   for(i=0, j=0; i<3; i++,j++)
    {
       printf("%f\n", micro[i][j]);
    }
    goto a;
    }
    case 3:
    {
   // Output using nested for loop
   printf("\nBelow are Price, Top speed, Mileage for SUV:\n");
   for(i=0, j=0; i<3; i++,j++)
    {
       printf("%d\n", suv[i][j]);
    }
    goto a;
    }
    default:
    {
    	printf("\nInvalid Input");
    	goto c;
	}
   }
	   }
	default:
	{
	    printf("\nInvalid Input");
    	goto a;	
	}
}
return 0;
}
