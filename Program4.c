/* Implementation of Arrays */
#include<stdio.h>
#include<conio.h>
int main()
{
	char mini[100],micro[100],suv[100];
    int option,option2,option3;
    printf("-------Car Database Input System-------\n");
    /* Options */
    a: printf("\nPress 1 to input cars into database, Press 2 to view current cars in the database:-\n");
    scanf("%d",&option);
    switch(option)
    {
    	case 1:
    	{
    		    /* Input Cars */
    		printf("\n Press 1 to input Mini, Press 2 to input Micro, Press 3 to input SUV:-\n");
    		scanf("%d",&option2);
    		switch(option2)
    		{
			case 1:
    		{
    			getchar();
    			gets(mini);
    			goto a;
			}
			case 2:
			{
				getchar();
				gets(micro);
				goto a;
			}
			case 3:
			{
				getchar();
				gets(suv);
				goto a;
			}
			default:
			{
				printf("\n Invalid Input \n");
				goto a;
			}
		}
		}
		case 2:
		{
			/* View Cars */
			printf("\n Press 1 to View Mini, Press 2 to View Micro, Press 3 to View SUV:-\n");
			scanf("%d",&option3);
    		switch(option3)
    		{
			
    		case 1:
    		{
    			getchar();
    			puts(mini);
    			goto a;
			}
			case 2:
			{
				getchar();
				puts(micro);
				goto a;
			}
			case 3:
			{
				getchar();
				puts(suv);
				goto a;
			}
			default:
			{
				printf("\n Invalid Input \n");
				goto a;
			}
		}
		}
		default:
			{
			   printf("\n Invalid Input \n");
		    	goto a;	
			}
		}
	return 0;
	getch();
}
