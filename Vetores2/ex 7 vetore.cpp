
#include<stdio.h>

int main()
{
	
  int A[5], ind, Media,B[5];

	
	for(ind = 0; ind < 5; ind++)
	{   
	
		
		printf("A[%d] = ", ind);
		scanf("%d", & A[ind]);
			printf("B[%d] =", ind);
			scanf("%d", &B[ind]);
			
				if(B[ind] == A[ind])
	{
		printf("posicao igual no vetor %d e o valor igual eh %d  \n",ind, A[ind] );
	}
	
}
  
	
	
	
}