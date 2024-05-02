#include <stdio.h>


int potencia (int base, int expo); 
int main(){
	
	int base,expo;
	
	printf("Ingrese el numero Base: ");
	scanf("%d",&base);
	
	printf("Ingrese el numero Exponente: ");
	scanf("%d",&expo);
	
	
	
	printf("\nResultado de [%d]^[%d] es: [%d] ",base,expo,potencia(base,expo));
	
	
	return 0;
}



int potencia(int base, int expo){
	
int result = base;
	

for(int i = 1 ; i < expo ; i++ ){
	
	
	result = result * base;
	

	
}	
	return result;
	
}





