#include<stdio.h>
int i;

//procedimento das notas
void mostrar_notas(float notas [], int n)
{
	printf("n\Notas dos alunos\n");
	for (i = 0; i < n; i++)
	{
		printf("n\Aluno %d: %2.f\n", i + 1, notas[i]);
	}
}

//função calcular média
float calcular_media(float notas[], int n)
{
	float soma = 0;
	int i;
	for (i = 0; i < n; i++)
	{
	soma += notas[i];
	}
	return soma / n;
}



//função do maior número
float maior_nota(float notas[], int n)
{
	float maior = notas [0];
	int i;
	for (i = 1; i < n; i++)
	{
		if(notas[i] > maior)
		{
			maior = notas[i];
		}
	}
	return maior;
}

//função dos alunos acima da média
int quantidade_acima_media(float notas[], int n, float media )
{
	int i, cont = 0;
	for (i = 0; i < n; i++)
	{
		if(notas[i] > media)
		{
			cont++;
		}
	}
	return cont;
}

int main()
{
	int i, n, alu, notas;
	
	printf("Tem quantos alunos na sua turma?: ");
	scanf("%d", &n);	
	
	float notas[n]
	
	for(i = 0; i < n; i++)
	{
		printf("Digite a nota do aluno: ")
		scanf("%f", &nota)
	}
	
		
	printf("Insira as notas: ");
	scanf("%d", &notas);
	
	mostrar_notas;
}
