#include<stdio.h>
int main(){
	
	printf("digite um numeros e 0 para parar de rodar o sistema \n");
	
	int soma, n1;
	
	
	
	n1 = 1;
	soma = 0;
	
	while(n1 != 0)
	{
	scanf("%d", &n1);
		printf("digite o prox numero \n");
		if((n1 >= 35) && (n1 <=55))
		{
			soma = soma +n1;
		}
		
		
	}
	
	printf(" o resultado eh  %d  \n", soma);
}
