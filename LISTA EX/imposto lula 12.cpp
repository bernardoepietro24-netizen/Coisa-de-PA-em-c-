#include<stdio.h>
int main(){
	
		float salario;
		float total_ir;
		
	printf("Digite o seu salario, para calcular o Imposto de Renda: ");
	scanf("%f", &salario);
	
	if(salario <= 1710.78){
		printf("Voce esta isento do Imposto de Renda.");
	}
	
	else
	{
		if((salario >= 1710.79) && (salario <= 2563.91))
		{
			total_ir =(salario * 0.075 - 128.31);
			printf("o seu imposto a pagar eh %f", total_ir);
		}	
		else
		{
			
				if((salario >= 2563.92) && (salario <= 3418.59))                                      
	{	
	
	total_ir = salario * 0.15 - 320.66;
	printf("o seu imposto a pagar eh %f", total_ir);
	}
	else
	{
		if((salario >= 3418.60) && (salario <= 4271.59))    
		{
			total_ir = salario * 0.225 - 577;
			printf("o seu imposto a pagar eh %f", total_ir);
		}
		else
		{
			total_ir = salario * 0.275 - 790.58;
			printf("o seu imposto a pagar eh %f", total_ir);
		}
	}
		}
	}
	

	
}


