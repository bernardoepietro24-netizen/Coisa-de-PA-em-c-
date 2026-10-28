#include<stdio.h>
int main(){
	
	printf("digite o valor da sua compra: ");
	
	int valor;
	scanf("%d", &valor);
	
	
	if(valor > 500){
		
		printf("Voce ganhou um voucher de R$100,00.");
		
	}
	
	else{
		
		printf("Voce ganhou um voucher de R$50,00.");
		
	}
	
}
