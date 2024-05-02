#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int amountCharge(int base, int day, char time);

int vuelto(int import, int importUser);

void show(int amount, int vuelto);

int main(){
	
	char catCar[10],time;
	int day,amountUser,totalAmount,base,totalVuelto;
	printf("\tCategoria del vehiculo");
	printf("\n-moto \n-auto \n-camioneta \n-camion\n");
	printf("\ncat:");
	
	scanf("%s",&catCar);
	
	printf("\nDia(1...7): ");
	scanf("%d",&day);
	
	printf("\nHorario(a/b): ");
	fflush(stdin);
	scanf("%c",&time);
	
	printf("\nImporte entregado: ");
	scanf("%d",&amountUser);
	

if (!strcmp(catCar, "moto")) {
    base = 5;
} else if (!strcmp(catCar, "auto")) {
    base = 10;
} else if (!strcmp(catCar, "camioneta")) {
    base = 15;
} else if (!strcmp(catCar, "camion")) {
    base = 20;
} else {
    printf("No existe dicho vehiculo");
}
        
totalAmount = amountCharge(base,day,time);

totalVuelto = vuelto(totalAmount,amountUser);

show(totalAmount,totalVuelto);



	return 0;
}




int amountCharge(int base, int day, char time){

	int amount;
	
	if(day == 6 || day == 7 || time == 'b'){
		amount = base - ((base * 20) / 100) ;
	} else{
		amount = base + ((base * 20) / 100) ;
	}
	
   return amount;
	
}

int vuelto(int import, int importUser){
	
	int total = importUser - import;
	
	return total;
	
}


void show(int amount, int vuelto){
	
	
	system("cls");
	printf("Importe a cobrar: $%d",amount);
	printf("\nVuelto: $%d",vuelto);
	
	
}
