#include<stdio.h>

int maior_num(int n1,int n2)
{
	int maior;
	if  (n1 > n2)
	{
		
		maior = n1;
	}
		else
		{
			maior = n2;
		}
		 
	
}
	
int main ()
{

   printf("digite um numero");
   int n1, n2, maior;
   scanf("%d", & n1);
   scanf("%d", & n2);	
	 
	
	maior = maior_num(n1, n2);
	printf("o maior numero eh = %d", maior);
	
	
	
	
	
}