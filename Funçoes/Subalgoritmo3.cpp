#include<stdio.h>
#include"subalgoritmos.h"
#include<stdlib.h>
// Programa principal
int main()
{

	float n1, n2, n3, soma, media;
     int num1, num2, num3;
	int opcao;
	
	do
	{
		system("cls");
		printf("\n---- M E N U ----\n");
		printf("1 - Somar 2 numeros\n");
		printf("2 - Calcular media\n");
		printf("3 - Calcular delta\n");
     	printf("4 - Calcular proximo numero\n");
     		printf("5 - Calcular proximo numero par\n");
     			printf("6 - Calcular MAIOR numero\n");
		printf("0 - SAIR\n");
		printf("Escolha: ");
		scanf("%d", &opcao);
		
		switch (opcao){
		case 0:
				break;
			case 1:
				printf("Digite 2 numeros: ");
				scanf("%f%f", &n1, &n2);
				printf("\n1. Soma = %.1f", somar_numeros(n1, n2));	
			
				break;
			case 2:
				printf("Digite 3 numeros: ");
				scanf("%f%f%f", &n1, &n2, &n3);
					printf("\n2. Media = %.1f", calcular_media(n1, n2, n3));
				break;
			case 3:
				printf("Digite 3 numeros: ");

				scanf("%f%f%f", &n1, &n2, &n3);
				printf("\n3. Delta = %.1f", calcular_delta(n1, n2, n3));
				break;
				case 4:
						printf("Digite 1 numero: ");
							scanf("%d", &num1);
		            printf("\n4. o prox numero eh = %d", prox_num(num1));
		            break;
		            case 5:
						printf("Digite 1 numero para receber o par: ");
							scanf("%d", &num1);
		            printf("\n4. o prox numero eh = %d", prox_num_par(num1));
		            break;
		            
		            case 6:
				printf("Digite 2 numeros: ");

				scanf("%f%f%f", &n1, &n2);
				printf("\n3. maior numero  = %.1f", maior_2n(n1, n2));
				
				break;
		            
		            
			default:
				printf("Opcao invalida!");
		}
		printf("\n");
		
		system("pause");
		
	}while (opcao != 0); // O usuario que prosseguir
	
}
	
	
	
	
	
	
	/*
	printf("\n4. Proximo numero = %d", prox_num(5));
	printf("\n5. Proximo par = %d", prox_num_par(8));
	printf("\n6. Maior entre 2n = %.1f", maior_2n(8, 55));
	printf("\n7. Menor entre 3n = %.1f", menor_3n(8, 67, 55));
	8. Calcular o fatorial: fatorial(4)    4. 3 . 2.1 = 24
	9: calcular a potencia: potencia(2, 3) 2 . 2 . 2 = 8
	*/
