#include<stdio.h>
int main(){
	
	
  printf("digite suas notas");
  printf("\n");
	int n1, n2, med;
	
  
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	med = (n1 + n2)/2;
	
     if ((n1 < 0 || n1 > 10)  || (n2 < 0 || n2 >10))
	 {
	 	printf("a nota eh invalida");
	 	printf("\n");
	 	
	 }
	
	
	else
	{
		printf("sua nota eh VALIDA");
		printf("\n");
		 
		if(med < 5)
		{
		printf("reprovado");
	 	printf("\n");
			
		}
		else
		{
		printf("APROVADOOOOO");
	 	printf("\n"); 
		}
		
		
		
	}
	 
	
}
