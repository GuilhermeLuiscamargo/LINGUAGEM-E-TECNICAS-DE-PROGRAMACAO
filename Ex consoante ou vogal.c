#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	printf("Digite uma letra ");
	scanf("%c",&letra);
	if(letra == 'a'|| letra == 'e'|| letra == 'i' || letra=='o' || letra == 'u'){
		if(letra == 'a' || letra == 'o'){
		    printf("AOBA ");	
		};
		if(letra == 'i'|| letra =='u'){
			printf("LA ele ");
		}else{
			printf("67 ");
		};
	    	};	
	switch(letra){
		case ('A'||'a'):
			printf("A de amor");
			break;
		case 'b':
			printf("B de Baixinho");
			break;
		case 'c':
			printf("c de coração");
			break;
		case 'd':
			printf("d de Dedinho");
		    break;
		default:
			printf("Valor não encontrado");
			break;
	}
	
	 
	
	
	
	
	
	
	
	
	return 0;
}
