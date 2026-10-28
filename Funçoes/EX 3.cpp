#include<Stdio.h>



int Prox_num(float num1)
	{
		int prox;
		prox = num1 +1;
		return prox;
		 
		
		
		
	}
int main()
{
	printf("digite um numero");
	int n1, prox;
	scanf("%d", & n1);
	 
	 prox = Prox_num(n1);
	 
		printf("o proximo numero eh = %d", prox);
	
	
	
	
}