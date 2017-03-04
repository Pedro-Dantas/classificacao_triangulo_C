#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x, y, z, soma;
	
	printf("DESCUBRA A CLASSIFICACAO DO TRIANGULO ATRAVES DOS ANGULOS INTERNOS: \n");
		
	printf("\nDigite o valor de um dos angulos internos do triangulo: ");
	scanf("%d", &x);
	
	printf("\nDigite o valor do segundo angulo interno do triangulo: ");
	scanf("%d", &y);
	
	printf("\nDigite o valor do terceiro angulo interno do triangulo: ");
	scanf("%d", &z);
	
	soma=x+y+z;
	
	if(soma!=180){	
	
		printf("\nA soma dos angulos deve ser 180.");
		
	}
	
	else if((x==90)|| (y==90)|| (z==90)){
		
		printf("\nEste triangulo eh reto.");
			
    } 
	else if((x>90)|| (y>90)|| (z>90)){
		
		printf("\nEste triangulo eh obtuso.");
		
	}
		
	else{
		
		printf("\nEste triangulo eh acutangulo");
			
		}
		return 0;
	}	
	


