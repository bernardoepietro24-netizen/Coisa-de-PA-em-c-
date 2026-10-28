#include<stdio.h>

int main(){
	
	printf("digite o valor da compra:  ");
	
	int v;
	int v2;
	scanf("%d", &v);
	
 v2 = v;
	
	if(v > 1000){
		
		 v = v - (v * 0.08);
		
		
	}
	else {
		
		 v = v - (v * 0.04);
		
	}
	printf(" o valor da compra eh =  %d", v2 );
	printf("\n");
	printf( "o valor da compra eh =  %d", v );
	
}
