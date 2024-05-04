#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int amountExpense(char catDep,int typeDep,char garage);
void showCantDP(int cantdp);


int main(){
	
	int numDepart,type,expense,cantDP;
	char cat,garage,option[3];
	float  mult,total;

do{
	system("cls");
	
    printf("\n\n\t\t\tCalculo - Expensa\n");
    printf("\t\t\t----------------\n");
    
	printf("\n\nNumero de departamento: ");
	scanf("%d",&numDepart);
	
	printf("\n\n(p)=Piso \n(s)=semi-piso \n(d)=dos ambientes \n(m)=monoambiente  \n\nCategoria:");
	fflush(stdin);
	scanf("%c",&cat);
	
	printf("\n\nIndique tipo \n(1)-Profesional \n(2)-Particular \n\ntipo: ");
	scanf("%d",&type);
	
	if(cat == 'd' && type == 1) cantDP++;
	
	printf("\n\nTiene cochera (S/N): ");
	fflush(stdin);
	scanf("%c",&garage);
	
	printf("\n\nMonto multas (si no tiene '0'):");
	scanf("%f",&mult);
	
	system("cls");
			
	expense = amountExpense(cat,type,garage);

	printf("- Monto de expensa: $%d",expense);
	printf("\n- Monto Multa: $%.2f",mult);
    total = expense + mult;
    printf("\n- Total: $%.2f\n",total);
   
   
		
	system("pause");
	printf("\nDesea ingresar mas datos de departamentos?(SI/NO): \n");
	fflush(stdin);
	scanf("%s",option);	
	
 }while(!strcmp(option,"SI"));
	
	 showCantDP(cantDP);
	return 0;
}

int amountExpense(char catDep,int typeDep,char garage ){
	
	int totalExpense = 0 ; 
	
    switch(catDep){
    	
    	case 'p':
    		totalExpense += 4000;
    	break;
    	
    	case 's':
    		totalExpense += 3000;
    	break;
    	
    	case 'd':
    		totalExpense += 2000;
    	break;
    	
    	case 'm':
         	totalExpense += 1000;
    	break;
	}
	
	if(typeDep == 1) totalExpense += 2500;
	
	if(garage == 'S') totalExpense += 1500; 
	
	return totalExpense; 
}

void showCantDP (int cantdp) {

    printf("\n-Cantidad Departamentos dos ambientes - Profesional: %d\n\n",cantdp);

}
