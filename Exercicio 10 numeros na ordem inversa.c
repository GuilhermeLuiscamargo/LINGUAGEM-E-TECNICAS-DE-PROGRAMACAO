#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//funções que comparam o maior e o menor entre 2 numeros.
int comparaMaior(int A, int B){
	if(A>B)return A;
	else return B;
};
int comparaMenor(int A, int B){
		if(A<B)return A;
	else return B;
}



//função principal
int main() {
int valores[10],i;
int maior, menor;




//loop para pegar os 10 valores
printf("digite os valores!\n");
for(i=0;i<10;i++){
	scanf("%d",&valores[i]);
};

printf("\n------------------------------------------------------------------\n");


//loop para pegar o maior valor entre os 5 primeiros
maior=valores[0];
for(i=1;i<5;i+=2){
int maior_temp=comparaMaior(valores[i],valores[i+1]);
maior=comparaMaior(maior_temp,maior);	
}
//loop para pegar o menor valor entre os 5 ultimos
menor=valores[5];
for(i=6;i<9;i+=2){
int menor_temp=comparaMenor(valores[i],valores[i+1]);
menor=comparaMenor(menor_temp,menor);	
}
//loop para imprimir os valores na ordem contraria
printf("Valores ao contratio:\n");
for(i=9;i>=0;i--){
printf("|%d|\n",valores[i]);
};

printf("O maior valor dos 5 primeiros: %d",maior);
printf("\nO menor valor dos 5 primeiros: %d",menor);
return 0;
}
