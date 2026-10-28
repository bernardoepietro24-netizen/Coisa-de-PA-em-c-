#include<stdio.h>

int main()
{
	printf("digite o numero para comecar e finalizar \n");
	int num1, num2, mero, troca;
	
	scanf("%d", &num1);
		scanf("%d", &num2);
		
				mero = num1+1;
				
				
				
		if(num1 > num2)
		{
		mero = num1-1;
			while(mero > num2)
			{
				printf("%d \n", mero);
				mero--;
			}
			
			
				
		}
				
				
				
		while(mero < num2)
		{
			printf("%d \n", mero);
			mero++;
		}
	
}
