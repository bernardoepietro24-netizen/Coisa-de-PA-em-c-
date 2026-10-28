#include<stdio.h>
#include"subalgoritmos.h"
#include<stdlib.h>
// Programa principal
int main()
{

	float n1, n2, n3, soma, media;
	int opcao;
	
	do
	{
		system("cls");
		printf("\n---- M E N U ----\n");
		printf("1 - Somar 2 numeros\n");
		printf("2 - Calcular media\n");
		printf("3 - Calcular delta\n");
			printf("4 - achar proximo numero\n");
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
		
			default:
				printf("Opcao invalida!");
		}
		printf("\n");
		
		system("pause");
		
	}while (opcao != 0); // O usuario que prosseguir
	
}
	
	
	
	
	
	
