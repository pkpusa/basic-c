#include<stdio.h>
#include<conio.h>
int main()
  {  
     /*Declaration section starts */
     int hybrid;
	 float micro;
	 char sedan;
	 long  SUV;
	 short int MUV;
	 unsigned int luxury;
	 signed int hatchback; 
	 int useroption;
	 /*Declaration section ends */
	 /* initialization section begins*/
     q: printf("Input inventory size of Hybrid:\n");
     scanf("%d",&hybrid);
     if(hybrid<0)
     {
     	printf("\nInvalid Input\n");
     	goto q;
	 }
	w: printf("Input inventory size of Micro:\n");
	 scanf("%f",&micro);
	  if(micro<0)
     {
     	printf("\nInvalid Input\n");
     	goto w;
	 }
	 getchar();
	 printf("Input inventory size of Sedan:\n");
	 fflush(stdin);
	 scanf("%c",&sedan);
	 e: printf("Input inventory size of MUV:\n");
	 scanf("%d",&MUV);
	  if(MUV<0)
     {
     	printf("\nInvalid Input\n");
     	goto e;
	 }
	 r: printf("Input inventory size of SUV:\n");
	 scanf("%ld",&SUV);
	  if(SUV<0)
     {
     	printf("\nInvalid Input\n");
     	goto r;
	 }
	 t: printf("Input inventory size of Luxury:\n");
	 scanf("%d",&luxury);
	  if(luxury<0)
     {
     	printf("\nInvalid Input\n");
     	goto t;
	 }
	 printf("Input inventory size of Hatchback: \n");
	 y: scanf("%d",&hatchback);
	  if(hatchback<0)
     {
     	printf("\nInvalid Input\n");
     	goto y;
	 }
	  /* initialization section ends*/
	 int tempmicro = (int)micro; /* Explicit conversion of float data type to int data type */
	 /*Ask user to perform his/her choice of operation*/
	ab: printf("\n Note1: Press 1 to print sizes of various datatypes used \n Note2: Press 2 to print the number of cars available in the inventory \n Note3: Press 3 to exit\n");
	 scanf("\n%d",&useroption);
	 switch (useroption)
	 {
	 case 1:
	 	{
	 			 printf("\nSizes of various car types used in database are as below:-\n"); /* This section prints the sizes of various datatypes used in the program */
            	 printf("The size of hybrid is: %d\n",sizeof(hybrid));
	             printf("The size of micro is: %d\n",sizeof(micro));
		         printf("The size of sedan is: %d\n",sizeof(sedan));
		         printf("The size of SUV is: %d\n",sizeof(SUV));
	 	         printf("The size of MUV is: %d\n",sizeof(MUV));
		         printf("The size of luxury is: %d\n",sizeof(luxury));
	             printf("The size of hatchback is: %d\n\n",sizeof(hatchback)); /*End of printing the sizes used in the program */
	             goto ab;
				 break;
		 }
     case 2:
     	{
		 
	             printf("Number of cars in the inventory:-\n"); /*This section prints the number of cars available in the in inventory */
	             printf("Hybrid: %d\n",hybrid);
	             printf("Micro: %d\n",tempmicro);
	             printf("Sedan: %c\n",sedan);
	             fflush(stdin);
	             printf("MUV: %d\n",MUV);
	             printf("Luxury: %d\n",luxury);
	             printf("Hatchback: %d\n",hatchback);
				 printf("SUV: %ld\n",SUV); /*End of printing of record */
	             goto ab;
	             break;
        }
    case 3:
    	{
    		break;
		}
	default:
		{
			printf("\n\nInvalid input");
			goto ab;
		}
      }    
	
  }
