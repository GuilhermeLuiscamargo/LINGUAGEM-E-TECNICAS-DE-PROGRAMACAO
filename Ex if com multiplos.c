#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, r;
	printf("digite os valores: ");
	scanf("%d\n%d",&a,&b);
	
	if((a&&b>0) && (a&&b%2==0)){
		printf("A e B sao multiplos de 2 e ");	
	if(a>b){
		if(a%b==0){
		printf("A e multiplo de b");
	}else{
		printf("A nao e multiplo de b");
	}
	}else{
		if(b%a==0){
		printf("B e multiplo de a");
	}else{
		printf("B nao e multiplo de a");
	}
	}
	}
	
	return 0;
}
