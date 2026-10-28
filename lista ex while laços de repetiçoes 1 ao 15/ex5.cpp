#include<stdio.h>

int main()
{
	printf("digite o numero para comecar e finalizar \n");
	int num1, num2, mero;
	
	scanf("%d", &num1);
		scanf("%d", &num2);
		
		mero = num1;
		while(mero <=num2)
		{
			printf("%d", mero);
			mero++;
		}
}
