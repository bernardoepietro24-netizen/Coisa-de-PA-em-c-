#include<stdio.h>

float Calcular_delta(float A, float  B, float C)

{

	float delta;
    	delta = B * B -4 *A *C;
	return delta;
	
}

int main()
{
	
	float n1, n2, n3, DELTA;
	
	printf("digite 3 numeros");
	
	scanf("%f", & n1);
	scanf("%f", & n2);
	scanf("%f", & n3);
	
	
	DELTA =  Calcular_delta(n1, n2, n3);
		printf("resultado eh = %f", DELTA);
	
	
}




