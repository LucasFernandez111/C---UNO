#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char name[10],surname[15];
	int years,number; 
	
	printf("Ingrese Nombre:  ");
	scanf("%s",&name);
	
	printf("Ingrese Apellido: ");
	scanf("%s",&surname);
	
	printf("Ingrese Telefono: ");
	scanf("%i",&number);
	
	printf("Ingrese Edad: ");
	scanf("%i",&years);
	
	
	printf("%s\n",name);
	printf("%s\n",surname);
	printf("%i\n",number);
	printf("%i\n",years);
	
	
	
	return 0;
}
