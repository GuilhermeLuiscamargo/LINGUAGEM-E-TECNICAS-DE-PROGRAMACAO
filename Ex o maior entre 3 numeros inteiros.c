#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,s,maior,maior_maior;
printf("Digite o valor de A B e S, nesta ordem\n");
scanf("%d\n%d\n%d",&a,&b,&s);
maior=((a+b+abs(a-b))/2);
maior_maior=((maior+s+abs(maior-s))/2);
printf("maior numero entre |%d|--|%d|--|%d|: %d",a,b,s,maior_maior);
	return 0;
}
