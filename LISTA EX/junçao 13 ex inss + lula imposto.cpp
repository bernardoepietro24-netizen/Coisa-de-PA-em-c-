#include<stdio.h>

int main()
{
		
	printf("digite seu salario");
			printf("\n");
      float salario;
     	float total_ir;
     		float total_sa;
     	float salariob;
		float liquido;
     scanf("%f", & salario);
     salariob = salario;
     printf("salario bruto eh %f", salario);
	printf("\n");

    

		
	//INSS CALCULO
		if(salario <= 1247.70) 
		{
			
			total_sa = salario * 0.08;
			printf("o valor do inss eh %f", total_sa);
			printf("\n");
				
		}
		else
		{
			
			if(salario	<= 2079.50)
			{
				
					
			total_sa = salario * 0.09;
			printf("o valor do inss eh %f", total_sa);
				printf("\n");
				
			}
			else
			{
				
					if(salario <= 	4159)
					
					{
						
							total_sa = salario * 0.11;
			           printf("o valor do inss eh %f", total_sa);
				printf("\n");
						
					}
					else
					{
						printf("o valor do inss eh 468");
						printf("\n");
					}
				
			}
			
			
			
			
		}
		//cauclo impostos
		
		
	
	
		

	
	
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
		liquido = salario - (total_ir + total_sa);
		printf("\n");
	printf("salario liquido eh %f", liquido);
		printf("\n");
	
	
}
