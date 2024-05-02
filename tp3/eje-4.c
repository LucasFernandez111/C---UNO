#include <stdio.h>
//REALIZAR UNA FUNCIÓN QUE ME PERMITA ESTABLECER SI UN NÚMERO ES PAR O NO UTILIZANDO FUNCIONES.

void isPar(int n);

int main(){
	
	int n;
	
	printf("Ingrese Numero: ");
	scanf("%d",&n);
	
	isPar(n);
	
	return 0;
}


void isPar(int n){
	
	int result = n%2;
	
	if(result != 1){
		printf("\nEl numero [%d] es Par",n);
	}else{
		printf("\nEl numero [%d] es Impar",n);
	}
    
}
