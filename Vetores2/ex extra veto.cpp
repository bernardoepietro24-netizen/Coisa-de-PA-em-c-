#include<stdio.h>


int main()
{

int V[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int  i, n,p;

 p = 0;


scanf("%d", & n);

for(i = 0; i <= 10; i++)
{
if( n == V[i] )
{
	p = 1;
	printf("valor encontrado = %d", n);
	break;
}
  
   

}
if (p == 0)
{
	printf(" nao foi achado o numero(nao esta na lista)");
}

}


