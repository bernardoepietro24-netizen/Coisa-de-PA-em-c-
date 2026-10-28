
	#include<stdio.h>
void Tabuada() 
{
	int n1, H, R;
	
	scanf("%d", & n1);
	
	for(R = 1; R <=10; R++)
	{
		
			
		H = n1 *R;
		
		printf("\n %d", H );
	}
	
	
}

void Proximetro()
{
	int num1, num2, Ra, he;
	
	scanf("%d%d", &num1, &num2);
	for(Ra = 1; Ra <=num2; Ra++)
	{
		
		he = num1 * Ra;
		
	
		printf("\n %d", he );
		
		
	}
	
	
	
	
	
}
void Tabuada2()
{
		int n1, H, R;
	
	scanf("%d", & n1);
	
	for(R = 1; R <=10; R++)
	{
		
			
		H = n1 *R;
		
		printf("\n   %d  X %d = %d ", n1,  R, H);
	}
	
}


void Tabuada3()
{
	int num1, num2, Ra, he;
	
	scanf("%d%d", &num1, &num2);
	for(Ra = 1; Ra <=num2; Ra++)
	{
		
		he = num1 * Ra;
		
	
		printf("\n   %d  X %d = %d ", num1,  Ra, he);
		
		
	}
	
}
	
void Tabuada4()
{
	int num1, num2, num3, Ra, he;
	
	scanf("%d%d%d", &num1, &num2, &num3);
	for(Ra = num2; Ra <=num3; Ra++)
	{
		
		he = num1 * Ra;
		
	
		printf("\n   %d  X %d = %d ", num1,  Ra, he);
		
		
	}
	
}

	
	
	
int main()
{

	float n1, n2, n3, soma, media;
     int num1, num2, num3;
	int opcao;
	
	do
	{
	
		printf("\n---- M E N U ----\n");
		printf("1 -tabuada do numero \n");
		printf("2 -Numeros proximos com ciclo definido \n");
		printf("3 - Calcular delta\n");
     	printf("4 - Calcular tabuada homosexual com inicio e fim\n");
     		printf("5 - Calcular tabuada gay gulosa\n");
     		
		printf("0 - SAIR\n");
		printf("Escolha: ");
		scanf("%d", &opcao);
		
		switch (opcao){
		case 0:
				break;
			case 1:
				printf("Digite 1 numero: ");
			    Tabuada();
			    {
			    	
				}
				break;
			
			
			case 2:
			printf("Digite 2 numero o numero para comecar e a quantidade de ciclos: ");
			 Proximetro();
			 {
			 	
			 }
				break;
			
			case 3:
				
				printf("digite 1 numero e daremos a tabuada");
				Tabuada2();
				{
					
				}
				break;
			
				case 4:
					
				printf("digite 2 numero e daremos a tabuada de o inicio e o fim do ciclo");
				Tabuada3();
				{
					
				}
				break;
			
						
		            case 5:
						
		            
		          printf("digite 3 numeros primeiro qual sera a taboada depois qunatos ciclos sera e por ultimo aonde ela via comecar eu so gay ao quadrado");
				Tabuada4();
				{
					
				}
				break;
			  case 6:
				
		            
			default:
				printf("");
		}
		printf("\n");
		
	
		
	}while (opcao != 0); // O usuario que prosseguir
	
}
	