#include<stdio.h>

int main()
{
	
	printf("digite 3 numeros");
	printf("\n");
	int n1, n2, n3;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	
	if(n1 > n2)
	{
		
		
		if(n1 > n3)
		{
			printf("o maior numero eh %d", n1);
				printf("\n");
		}
		else
		{
			printf("o maior numero eh %d", n3);	
			printf("\n");
		}
		
	}
	else
	{
		if(n2>n3)
		{
			
			printf("o maior numero eh %d", n2);
				printf("\n");
			
		}
		else
		{
			
				printf("o maior numero eh %d", n3);
				printf("\n");
		}
		
		
	}
	
}
