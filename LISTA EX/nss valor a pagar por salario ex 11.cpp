#include<stdio.h>

int main()
{
	
	printf("DIGITE SEU SALARIO!");
		printf("\n");
		
		float sal;
		scanf("%f", &sal);
		
		
		if(sal <= 1247.70)
		{
			
			sal = sal * 0.08;
			printf("o valor a pagar eh %f", sal);
				
		}
		else
		{
			
			if(sal	<= 2079.50)
			{
				
					
			sal = sal * 0.09;
			printf("o valor a pagar eh %f", sal);
				
				
			}
			else
			{
				
					if(sal <= 	4159)
					
					{
						
							sal = sal * 0.11;
			           printf("o valor a pagar eh %f", sal);
				
						
					}
					else
					{
						printf("o valor a pagar eh 468");
					}
				
			}
			
			
			
		}
	
}
