#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void menu()
{
	printf("Menu \n");	
printf("ex 1 crie um vetor \n");	
printf("ex 2 ache o valor no vetor da maquina \n");	
printf("ex 3 ache pares no vetor da maquina \n");	
printf("ex 4 crie um vetor de um so valor \n");	
printf("ex 5 exiba o vetor da maquina \n");	
printf("0 saia da lista \n");	

}

int main()
{
	
		int V[10] = {1, 25 ,632 ,67, 42, 69, 90, 10, 242,99 };
	int v[10], i, procura,b,p,c;
	
	int opcao;
	do
	{
  system("cls");

menu();
 scanf("%d", &opcao);
 
 switch (opcao){
 	case 0:
 		break;
 	case 1:
 	
 		printf("\n ex 1 \n");
// ex 1
for(i = 0; i < 10; i++)
{
	printf("V[%d] = ", i);
	scanf("%d", &v[i]);
	

}
break;
 	
 	case 2:
 		
 		printf("ex 2 \n");
	// ex 2
	
			printf(" V[10] = {1, 25 ,632 ,67, 42, 69, 90, 10, 242, 99} \n");
				printf("acharemos o valor no vetor \n");
	scanf("%d", &procura);
	c= 0;

for(b = 0; b < 10; b++)
{

	if(V[b] == procura  )
		{
		printf("\n o valor achado! e foi %d ", V[b]);
			c = c+1;
		break;

	}


}
if(c < 1)
{
	printf(" o valor nao foi achado! \n");
}

break;

case 3:
	
	//3 
p = 0;
			printf("ex 3");
	for(b = 0; b < 10; b++)
{
	if(V[b] %2 == 0)
	{
		p = p+1;
	}
	
	
}
printf(" temos %d pares /n", p);
break;
	case 4:
	printf(" ex 4 crie o vetor  \n");
int g2a;
	printf(" fale o numero para prencher o vetor  \n");
 scanf("%d", &g2a);
 int L[10];
 
 for(i = 0; i < 10; i++)
 {
 	L[i] = g2a;
 	printf("L[%d] = %d  \n",i, L[i]);
 }
 break;
 case 5:
 	// 5
	printf(" ex 5\n");
		printf("o vetor eh \n");
		for(i = 0; i <10; i++)
		{
			
 	printf("V[%d] = %d  \n",i, V[i]);
		}
break;
}
printf("\n");

     system("pause");
 }
 
 while(opcao !=0);
 
 
}
	
	
	
	
	

	






