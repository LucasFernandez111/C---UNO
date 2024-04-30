#include <stdio.h>

/*Escribir un algoritmo en el cual se ingresan dos variables a y b.
realice la suma, la resta, la división y la multiplicación muestre los cuatro resultados por pantalla.
luego intercambie el valor de las dos variables y mostrar los valores intercambiados.
*/

int main(){
	
   float a,b,sum,res,mult,div;
   
   printf("Ingrese A: ");
   scanf("%f",&a);
   printf("Ingrese B: ");
   scanf("%f",&b);
   
   
   sum = a + b;
   res  = a - b;
   mult = a * b;
   div  = a / b;
   
   printf("Suma: %0.0f\n",sum);
   printf("Resta: %0.0f\n",res);
   printf("Multiplicacion: %0.0f\n",mult);
   printf("Division: %0.2f\n",div);
   
   
   
   

	
	
	return 0;
}
