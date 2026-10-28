#include<stdio.h>
int main()
{

int n, m, v;

scanf("%d", & n);

for(v=1; v<=10;v++)
{
	m = v*n;
	
	printf("%d x %d = %d \n",v, n, m);
}
	
}
