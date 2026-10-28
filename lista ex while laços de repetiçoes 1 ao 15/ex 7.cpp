#include<stdio.h>

int main()
{
	printf("digite qual a tabuada \n");
	int num1, resultado, mero, aumento;
	
	scanf("%d", &num1);
		
		mero = num1;
		aumento = 1;
	      
	
		while(aumento <= 10 )
		{
			resultado = mero * aumento;
		    printf(  "%d ", num1);
		    printf(  " X %d", aumento);
			printf(  " = %d \n", resultado);
			
			aumento++;
			
			
		}
}
