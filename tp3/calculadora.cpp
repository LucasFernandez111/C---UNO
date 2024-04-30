#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float operation(float n1, float n2,char type); 
void showResult(float result);

int main(){
	
	float n1,n2,result;
	char type,next[3];
	
do{
	
	printf("Ingrese primer numero: ");
	scanf("%f",&n1);
	
    printf("\nIngrese segundo numero: ");
	scanf("%f",&n2);
	
	system("cls");
	
	printf("\t\t\tSeleccione tipo de operacion");
	
	printf("\n\t s - suma ");
	printf("\n\t r - resta ");
	printf("\n\t m - multiplicacion ");
	printf("\n\t d - division ");
	
	
	printf("\n\nOpcion: ");
	fflush(stdin);
	scanf("%c",&type);
	
	system("cls");
	
	if(type == 'd' && n2 == 0) {
		printf("[%0.f] No se puede dividir por 0 ....",n1);
		strcpy(next,"NO");
		
		break;
	}
	
	result = operation(n1,n2,type);
	
	showResult(result);
	
	printf("Desea seguir ingresando operaciones? (SI/NO)\n -");
	fflush(stdin);
	scanf("%s",next);
	
	system("cls");
	

		
}while(!strcmp("SI",next));

	
		
	return 0;
}




float operation(float n1,float n2,char type){
	
	float result;
	
	switch(type){
		
		case 's': result = n1 + n2;
		break;
		
		case 'r': result = n1 - n2;
		break;
		
		case 'm': result = n1 * n2;
		break;
		
		case 'd': result = n1 / n2;
		break;
		
	}

	return result;
	
}


void showResult(float result){
	
	printf("\n\tEl resultado es : %.2f\n\n",result);
	
	system("pause");
	system("cls");
}
