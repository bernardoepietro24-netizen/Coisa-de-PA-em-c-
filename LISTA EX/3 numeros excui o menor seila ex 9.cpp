#include<stdio.h>

int main()
{
	
	
	
	printf("digite 3 numeros");
	int n1, n2, n3, med;
	
	scanf("%d", &n1);
		scanf("%d", &n2);
			scanf("%d", &n3);
	
	if(n1 >n2)
	{
		if(n2 < n3)
		{
			med = (n1+n3)/2;
			if(med < 6)
			{
			printf("reprovado Media: %d", med);
			}
			else
			{
					printf("aprovado Media: %d", med);
			}
			
		
			
			
		}
			else
			{
					med = (n1+n2)/2;
					
					if(med <6)
					{
					printf("reprovado Media: %d", med);
					}
					else
					{
							printf("aprovado Media: %d", med);
					}
				
			}
			
	
		
	}
		else
		{
			if(n1 < n3)
			{
					med = (n3+n2)/2;
				 if(med <6)
				 {
				 printf("reprovado Media: %d", med);
				 }
				 else
				 {
				 		printf("aprovado Media: %d", med);
				 }
				 
			}
			else 
			{
					med = (n1+n2)/2;
					if(med < 6)
					{
						printf("reprovado Media: %d", med);
					}
						 else
				 {
				 		printf("aprovado Media: %d", med);
				 }
				 
				
			}
			
		}
		
	
	
	
}
