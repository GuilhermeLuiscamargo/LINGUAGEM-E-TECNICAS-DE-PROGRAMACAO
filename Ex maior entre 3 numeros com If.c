#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c, maiorTemp, maior;
	printf("Insrira os valores de A, B, C\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	
	if(a>b&&a>c){
		printf("O maior = A");
	};
	if(b>a&&b>c){
		printf("O maior=B");
	};
	if(c>a&&c>b){
		printf("O maior = C");
	};
	return 0;
}
