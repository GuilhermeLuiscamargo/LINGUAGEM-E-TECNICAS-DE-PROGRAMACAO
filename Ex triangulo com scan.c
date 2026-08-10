#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float altura,base,area;
	
printf("Para somar a area do triangulo primeiro informe a altura\n");
scanf("%f",&altura);

printf("Agora a base do triangulo\n");
scanf("%f",&base);

area = (base * altura) / 2;
printf("A area do triangulo de altura %0.2f e base %0.2f = %0.2f",altura, base, area);
	
	return 0;
}
