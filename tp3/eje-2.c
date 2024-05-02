#include <stdio.h>

int getNumber();
int showNumberChange(int *a, int *b);


int main(){
	
	int n1,n2;
	
	
	n1 = getNumber();
	n2 = getNumber();
	
	 showNumberChange(&n1, &n2);
	
	
	
	return 0;
}


int getNumber(){
	
	
	int n;
	
	printf("Ingrese numero: ");
	scanf("%d",&n);
	
	return n;
}



int showNumberChange(int *a, int *b){
	
	int aux = *a;
	
	*a = *b;
	*b = aux;
	
	
	printf("El valor de n1 es: %d y el valor de n2 es: %d",*a,*b);
	
      	

}

