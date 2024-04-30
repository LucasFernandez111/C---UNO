#include <stdio.h>


int main(){
	
	int cantA ,cantB,porcA , porcB ;
	
	char candidato;

	for(int i = 0 ; i<10 ; i++){
		
		printf("Ingrese Candidado a votar (A o B): " );
		scanf("%c",&candidato);
		fflush(stdin);
		
//		if(candidato != 'A' && candidato != 'a' && candidato != 'B' && candidato != 'b'){
//			printf("No es una letra")
//			
//		}
		if(candidato == 'A' || candidato == 'a' )cantB++;

		if(candidato == 'b' || candidato == 'b' )cantB++;

	
			
	}
	

	
	printf("Porcentaje candidato A: %c%d\n",37,cantA);
	printf("Porcentaje candidato B %c%d\n",37,cantB);
	
	
	return 0;
}
