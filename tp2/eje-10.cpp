#include <stdio.h>
#include <math.h>

int main () {
	
	float hip,cat1,cat2;
	
	printf("introduzca cateto 1 \n");
	
	scanf("%f", &cat1);
	
	printf("introduzca cateto 2\n");
	
	scanf("%f", &cat2);
	
	hip= sqrt(pow(cat1,2)+(pow(cat2,2)));
	
	printf("la hip es %0.2f", hip);
	
	
	
	
	
	
	
}
