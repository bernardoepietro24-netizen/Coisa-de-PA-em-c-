#include <stdio.h>
int main()
{
	printf("Digite um numero: ");
	float n;
	scanf("%f", &n);
	
	if(n > 0)
	{
	printf("Seu numero e positivo");
	}
	else
	{
		if(n < 0)
		{
			printf("Seu numero e negativo");
		}
		else
		{
			printf("Nulo");
		}
	}
	
	
}
