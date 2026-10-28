#include<Stdio.h>



int Prox_numPar(int num1)
	{
		int prox;
		
		if (num1 % 2 == 0)
		{
				prox = num1 +2;
		}
		else
		{
			prox = num1 +1;
		}
		
		return prox;
		 
		
		
		
	}
int main()
{
	printf("digite um numero");
	int n1, prox;
	scanf("%d", & n1);
	 
	 prox = Prox_numPar(n1);
	 
		printf("o proximo numero par eh = %d", prox);
	
	
	
	
}