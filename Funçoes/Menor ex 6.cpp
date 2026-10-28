#include<stdio.h>

int menor_num(int n1,int n2, int n3)
{
	
	int menor = n1;

	
	if(n2 < menor) 
	{
	  menor = n2;
	   	
	}
	if(n3 < menor)
	{
	menor = n3;
	
	}
	return menor;
																																																																																																																																																																									  																																																																																																																																																																											                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
}

	



int main ()
{

   printf("digite um numero");
   int n1, n2, n3, menor;
   scanf("%d", & n1);
   scanf("%d", & n2);	
	 scanf("%d", & n3);
	
	menor = menor_num(n1, n2, n3);
	printf("o Menor numero eh = %d \n", menor);
	
	
	
	
	
}