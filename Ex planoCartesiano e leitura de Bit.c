#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int n,resultado,bit64,bit32,bit16,bit8,bit4,bit2;
	printf("Digite um numero inteiro positivo menor ou igual a 64 para a converter em bits: ");
	scanf("%d",&n);
	
	bit64=n%2;
	resultado=n/2;
	
	bit32=resultado%2;
	resultado=resultado/2;
	
	bit16=resultado%2;
	resultado=resultado/2;
	
	bit8=resultado%2;
	resultado=resultado/2;
	
	bit4=resultado%2;
	resultado=resultado/2;
	
	bit2=resultado%2;
	resultado=resultado/2;
	
	printf("resultado= %d%d%d%d%d%d%d",resultado%2,bit2,bit4,bit8,bit16,bit32,bit64);
	
	//-------------Calculo do plano cartesiano------------------------------------------------------------------------
	
	int x1,x2,y1,y2;
	float dist,cat1,cat2;
	
	printf("Entre com os valores para p1(x1,y1)");
	scanf("%d",&x1);
	scanf("%d",&y1);
	
	printf("Entre com os valores para p2(x2,y2)");
	scanf("%d",&x2);
	scanf("%d",&y2);
	
	cat1= pow((x2-x1),2);
	cat2= pow((y2-y1),2);
	
	dist=sqrt(cat1+cat2);
	
	printf("%d",dist);
	
	return 0;
	//0111111
}
