#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int potencial(int calWork,int coop,int cap);
void show(int code, int pot);

int main(){
	int codEmploye,daysWork,calWork,coop,cap = 0,pot,maxDaysWork,maxCodeEmploye,codeEmploye,outLevel,prom;
	char isProf[3],option;
	
	
	do{
		system("cls");
		
		printf("\nCodigo del empleado: ");
		scanf("%d",&codEmploye);
		
		printf("\nDias trabajados: ");
		scanf("%d",&daysWork);
		
		printf("\nEs profesional (SI / NO ):");
		fflush(stdin);
		scanf("%s",isProf);
		
		printf("\nCalidad de trabajo (1 - 5): ");
		scanf("%d",&calWork);
		
		printf("\nCooperacion (1 - 5): ");
		scanf("%d",&coop);
		
		
		
		if(!strcmp(isProf,"SI")){
		printf("\nCapacidad de analisis y creatividad (1 - 5): ");
		scanf("%d",&cap);
		}
		
		
		if(!maxDaysWork && !maxCodeEmploye){
		maxCodeEmploye = codeEmploye;
		maxDaysWork = daysWork;
		
		}
		
		printf("----- %d------",maxCodeEmploye);
		
		if(daysWork > maxDaysWork ){
		maxDaysWork = daysWork;
		maxCodeEmploye = codeEmploye;
		}
		
		
		prom = (calWork+coop+cap) / 3;
		
		if(prom < 3 ) outLevel++;
		
	  	pot = potencial(calWork,coop,cap);
	  	
	  	show(codEmploye,pot);
		
		
		printf("\nDesea seguir ingresar mas empleados (S = si / N = no): ");
		fflush(stdin);
		scanf("%c",&option);
		
		
		printf("-----(%d) ----",outLevel);
			
	}while(option == 'S');
	
	printf("\nCantidad de empleados Fuera de nivel son %d",outLevel);
	printf("\n[%d] - Es el empleado con mayor dias trabajados",maxCodeEmploye);
	
	return 0;
}


int potencial(int calWork,int coop,int cap){
	
	int pot = 0;
	
	if(calWork >= 4 && coop >= 4 && cap >=4) pot = 1;
	

	return pot;
	
	
}


void show(int code, int pot){
	
	  if(!pot){
	  	printf("\nEl empleado (%d) No tiene potencial",code);
	  } else {
	  	printf("\nEl empleado (%d) tiene Potencial",code);
	  }
	  
	  
}




