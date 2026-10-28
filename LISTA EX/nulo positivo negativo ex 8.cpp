#include<stdio.h>
int main()
{
	printf("digite um numero");
		printf("\n");
	int n;
	
	scanf("%d", &n);
	
	if(n > 0)
	{
		
		printf("positivo");
		printf("\n");
	}
	else
	{
		if(n <0)
		{
		printf("negativo");
		printf("\n");
		}
		else
		{
		printf("nulo");
		printf("\n");	
		}
		
	}
	
	
}
