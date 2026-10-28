#include<Stdio.h>



float Calcular_Media(float num1, float num2, float num3)
	{
		float Media;
		Media = (num1 + num2 + num3)/3;
		
		return Media;
		
		
	}
int main()
{
	
	printf("digite 3 numeros");
	
	float n1, n2, n3, media;
	
	scanf("%f", & n1);
		scanf("%f", & n2);
		scanf("%f", & n3);
		
		
		media = Calcular_Media(n1,n2,n3);
		printf(" o resultado da media eh = %f", media );
	
	
	media = Calcular_Media(10, 10, 10);
	
			printf(" o resultado da media eh2 = %f", media );
			
			
			printf(" o resultado da media eh2 = %f", Calcular_Media(20, 20, 20 ) );
	
	
}