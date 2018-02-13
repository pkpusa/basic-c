/* Implementation of pointers to structures and unions */

#include <stdio.h>
/*Implementation of structure */
struct car
{
   int sno;
   float quantity;
   char name[10];
};
/* Implementation of unions */
union cars {
  int sUV;
  float luxury;
};

int main()
{
	int i,option;
    struct car car[3];
    union cars *carsPtr, cars1; /* Pointer to structure */
    carsPtr = &cars1;
    a: printf("\n\nPress 1 to inout Mini Inventory, Press 2 to access SUV and Luxury Inventory, Press 3 to Exit:");
    scanf("%d",&option);
    switch(option)
    {
    	case 1:
    		{
				printf("\nEnter 3 Cars:");
				for(i=0;i<3;i++) /* Array to structures */
				{ 
				    printf("\nEnter Mini Sno: ");
				    scanf("%d",&car[i].sno);
				
				    printf("\nEnter Mini Inventory: ");
				    scanf("%f",&car[i].quantity);
				    
				    printf("\nEnter Mini Name: ");
				    getchar();
				    fflush(0);
				    scanf("%s",&car[i].name);
				    getchar();
				}
				
				for(i=0;i<3;i++)
				{
					printf(" \n Mini Sno.:%d\n Mini Quantity:%f\n Mini Name:%s",car[i].sno,car[i].quantity,car[i].name);
				}
				goto a;
			}
		case 2: /* Printing using pointers */
			{
				printf("\n\n Enter SUV Inventory: ");
				scanf("%d",&carsPtr->sUV);
				printf("\n Enter Luxury Inventory: ");
				scanf("%f",&(*carsPtr).luxury);
				printf("\n SUV Cars (Invalid output because memory allocated for luxury):%d\n Luxury Cars:%f",carsPtr->sUV,(*carsPtr).luxury); /* Invalid output for SUV because memory allocated for luxury */
				goto a;
			}
		case 3:
			{
				printf("\n System will no exit");
				return 0;
			}
		default:
			{
				printf("\nInvalid Input");
				goto a;
			}
	}
return 0;
}
