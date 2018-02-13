#include <stdio.h>

int main()

{
	int option;
	char car[100],car2[100];
	/* Input Car Names */
	printf("Input name of 1st Car: ");
	gets(car);
	printf("\nInput name of 2nd Car: ");
	gets(car2);
	/* Select String Function */
	a: printf("\n \n Select 1  for String Copy, 2 for String Length, 3 for String Concatenation, 4 for String Compare, 5 to Convert to Lowercase, 6 to Convert to Uppercase, 7 for Substring: ");
	scanf("%d",&option);
	switch(option)
	{
		
		/* String Copy */
		case 1:
				{
				   int c = 0;
				   while (car[c] != '\0') 
				   {
				   car2[c] = car[c];
				   c++;
				   }
				   car2[c] = '\0';
				   printf("<\n New String is:");
				   puts(car2);
				   goto a;
				}
		
		/* String Length */ 
		case 2:
				{
			    int c = 0;
			    while (car[c] != '\0')
			    c++;
				printf("\n Length of \"%s\" = %d\n", car, c);
			    while (car2[c] != '\0')
			    c++;
				printf("\n Length of \"%s\" = %d\n", car2, c);				
				goto a;	
		     	}
		     	
		/* String Concatenation */
		case 3:
			    {
			       int c, d;
				   c = 0;
				   while (car[c] != '\0') {
				      c++;  	
				   }
				   d = 0;
				   while (car2[d] != '\0') {
				      car2[c] = car[d];
				      d++;
				      c++;	
				   }
				   car2[c] = '\0';
				   printf("\n String obtained on concatenation is \"%s\"\n", car2);
				   goto a;
				}
				
		/* String Compare */
		case 4:
			    {
			        int c = 0,flag;
				    while (car[c] == car2[c]) {
				    if (car[c] == '\0' || car2[c] == '\0')
				    break;
				    c++;
				   }
				 
				    if (car[c] == '\0' && car2[c] == '\0')
				    flag = 0;
				    else
				    flag = -1;
				    if (flag == 0)
					printf("\n Entered strings are equal.\n");
					else
					printf("\n Entered strings are not equal.\n");
					goto a;
				}
				
		/* To convert to lowercase */
		case 5:
			    {
					int i = 0; 
					while (car[i] != '\0') 
					{
				    if (car[i] >= 'A' && car[i] <= 'Z') {
				    car[i] = car[i] + 32;
				    }
				    i++;
				    }
				    printf("\n Lower Case String is = %s", car);
					goto a; 
				}
				
		/* To convert to uppercase */
		case 6:
			    {
					int i = 0; 
					while (car[i] != '\0') 
					{
				    if (car[i] >= 'a' && car[i] <= 'z') {
				    car[i] = car[i] - 32;
				    }
				    i++;
				    }
				    printf("\n Lower Case String is = %s", car);
					goto a; 
				}
		/* Substring */
		case 7:
			   {
			   	int sp,nc;
			    int c = 0;
				while (car[c] != '\0') {
				c++;  	
				   }
			   	b: printf("\n Input Starting Character:");
			   	scanf("%d",&sp);
			   	printf("\n Input Number of Character:");
			   	scanf("%d",&nc);
			   	if (sp > c)
			   	{
			   	printf("\n Invalid Input");
			   	goto b;
			    }
			    if (nc > c)
			   	{
			   	printf("\n Invalid Input");
			   	goto b;
			    }
			    int d = sp+nc;
				printf("\n");
			    while (sp < d)
			    {
			    	printf("%c", car[sp]);
			    	sp++;
				}
				printf("\n");
				goto a;
			   }
		default:
			    {
			    	printf("\n Invalid Input");
			    	goto a;
				}
	}

getch();
return 0;
}
