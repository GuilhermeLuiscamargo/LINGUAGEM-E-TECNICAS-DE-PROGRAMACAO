#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
//Codigo da area do Circulo-----------------------------------------------------------------------------------------------------------------------------------------
	
	float raio,base_b, base_B, base_H;	
	printf("informe o raio do circulo\n");
	scanf("%f",&raio);
	raio= 3.1415926*(raio*raio);
	printf(
	"\nA area do circulo = %0.2f\n"
	"--------------------------------------------------------\n\n",raio);
	
//Codigo da area do Trapezio-----------------------------------------------------------------------------------------------------------------------------------------
	
	printf(
	"Informe a Base de cima do trapezio(b)\n"
	"Base de baixo do trapezio(B)\n"
	"E a altura do trapezio(H)\n\n"
	 );
	 
	scanf("%f\n %f\n %f",&base_b,&base_B,&base_H);
	raio=((base_b + base_B) * base_H) / 2;
	printf("\nA area do trapezio = %0.2f",raio);
	
	
	
	
	return 0; 
}
