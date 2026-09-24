#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  	//---Exercicio 1----------------------------------------
	
	int idade, anoatual, dataNascimento;
	printf("Digite a idade da pessoa: ");
	scanf("%d", &idade);
	printf("Digite o ano atual: ");
	scanf("%d", &anoatual);


	dataNascimento = anoatual - idade;

	printf("Ano de nascimento: %d\n", dataNascimento);
	

	//------------------Exercicio 2----------------------------------------
	
	double kmh, ms;
	printf("Digite a velocidade em km: ");
	scanf("%lf", &kmh);

	ms = kmh / 3.6;

	printf("Velocidade: %.2f m/s\n", ms);
	

	//-----Exercicio 3----------------------------------------

	double reais, cotacao, dolares;
	printf("Digite o valor em reais: ");
	scanf("%lf", &reais);
	printf("Digite a cotacao do dolar: ");
	scanf("%lf", &cotacao);

	dolares = reais / cotacao;

	printf("Valor em dolares: US$ %.2f\n", dolares);


	//-------------Exercicio 4----------------------------------------
	
	double celsius, fahrenheit;
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%lf", &celsius);


	fahrenheit = celsius * (9.0 / 5.0) + 32.0;
	printf("Temperatura: %.2f F\n", fahrenheit);

	//--------------------Exercicio 5----------------------------------------

	double graus, radianos, pi;
	printf("Digite o angulo em graus: ");
	scanf("%lf", &graus);

    pi= 3.141592
	radianos = graus * pi / 180;
	printf("Angulo: %f radianos\n", radianos);


	//-----------Exercicio 6----------------------------------------
	
	int numero, antecessor, sucessor;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	antecessor = numero - 1;   
	sucessor = numero + 1;     

	printf("Antecessor: %d\n", antecessor);
	printf("Sucessor: %d\n", sucessor);
	

	//------------Exercicio 7----------------------------------------
	
	double premio1, premio2, premio3, total;
    total= 780000.00
	premio1 = total * 0.46;               
	premio2 = total * 0.32;              
	premio3 = total - premio1 - premio2;   

	printf("Primeiro ganhador: R$ %.2f\n", premio1);
	printf("Segundo ganhador: R$ %.2f\n", premio2);
	printf("Terceiro ganhador: R$ %.2f\n", premio3);


	//------Exercicio 8 -----------------------------
	
	int tempo, hora, minuto, segundo, resto;
	printf("Digite o tempo em segundos: ");
	scanf("%d", &tempo);

	hora = tempo / 3600;        
	resto = tempo % 3600;        
	minuto = resto / 60;       
	segundo = resto % 60;       

	printf("%d:%d:%d\n", hora, minuto, segundo);
	

	//----------------------------Exercicio 9 -----------------------------

	double viagem, veloc, dista, litros;
	printf("Digite o tempo gasto na viagem (em horas): ");
	scanf("%lf", &viagem);
	printf("Digite a velocidade media (em km/h): ");
	scanf("%lf", &veloc);

	dista = viagem* veloc;   
	litros = dista / 12;                

	printf("%.3f\n", litros);


	//----------Exercicio 10 ----------------------------
	
int a, b, c,maiorAB, maiorFinal;


    printf("Digite o primeiro numero (A): ");
    scanf("%d", &a);
    printf("Digite o segundo numero (B): ");
    scanf("%d", &b);
    printf("Digite o terceiro numero (C): ");
    scanf("%d", &c);

    
    
    maiorAB = (a + b + (a - b) * (2 * (a > b) - 1)) / 2;
    maiorFinal = (maiorAB + c + (maiorAB - c) * (2 * (maiorAB > c) - 1)) / 2;

   
    printf("\nO maior valor informado: %d\n", maiorFinal);
//-------------------------------------------------------------------------------------------------
  system("PAUSE");	
  return 0;
}
