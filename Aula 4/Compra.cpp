#include<stdio.h>
int main(){
	
	printf("Digite o valor da compra: ");

	int valor_og;
	int valor_desc;
	
	scanf("%d", &valor_og);
	
	if(valor_og > 1000)
	{
		valor_desc = valor_og - (valor_og * 0.08);
	}
	else
	{
		valor_desc = valor_og - (valor_og * 0.04);
	}
	
	printf("O valor original da compra eh.....: = %d", valor_og);
	printf("\n");
	printf("O valor da compra com desconto eh.: = %d", valor_desc);
	

	
}
