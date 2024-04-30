#include <stdio.h>
#include <iostream>


int main(){
	
	
	float grados,f,k;
	int option,repeat = 0;
	
	
	

	printf("Ingrese grados: ");
	scanf("%f",&grados);
	fflush(stdin);
	
	system("cls");
	
	do{
		

	
	printf("\n\nMenu de Opciones\n");
        printf("1. Kelvin \n");
        printf("2. Fahrenheit \n");
        printf("0. SALIR\n");
	
    printf("\nIngrese una opcion: ");
	scanf("%d",&option);
	fflush(stdin);
	
	system("cls");
		
		
		
		 switch(option){
		
		
     	case 1: 
     	  k = grados + 273.15;
     	  printf("Resultado: %0.2f k",k);
     	  repeat = 0;
     	   
     	
     	break;
     	
     	case 2: 
        	
     	    f = (grados * 1.8) + 32;
     	    printf("Resultado: %0.2f F",f);
     	    repeat = 0;
     	
     	break;
     	
     	case 0: 
		
		  return 0;
		break; 
     	
     	default:
		 printf("No existe esa opcion\n");
     	 repeat = 1;
		
	}
		
		
		
    }while(repeat);
    
     	
	 
	
	
	
	
	
	
	return 0;
}
