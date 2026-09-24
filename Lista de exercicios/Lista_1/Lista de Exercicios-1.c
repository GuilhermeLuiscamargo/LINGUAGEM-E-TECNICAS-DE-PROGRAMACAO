#include <stdio.h>
#include <math.h>

int main(void) {
    
    //-----Exercicio 1----------------------------------------

	int num1, num2;
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &num2);

	printf("Ordem inversa: %d %d\n", num2, num1);


	//------------Exercicio 2----------------------------------------
	
	 double num1;
    double num2;
    int expoente = 0;

    printf("Digite um valor positivo: ");
    scanf("%lf", &num1);

    num2 = num1;

    /* se for maior ou igual a 10, divide por 10 */
    if (num2 >= 10) {
        num2 = num2 / 10;
        expoente = expoente + 1;
    }

    /* se for menor que 1, multiplica por 10 */
    if (num2 < 1) {
        num2 = num2 * 10;
        expoente = expoente - 1;
    }

    printf("%f x 10^%d\n", num2, expoente);
	
	//--------------------Exercicio 3----------------------------------------
	int n, resultado, bit1, bit2, bit4, bit8, bit16, bit32;
	printf("Digite um numero inteiro positivo menor ou igual a 64 para converter em bits: ");
	scanf("%d", &n);

	bit1 = n % 2;
	resultado = n / 2;

	bit2 = resultado % 2;
	resultado = resultado / 2;

	bit4 = resultado % 2;
	resultado = resultado / 2;

	bit8 = resultado % 2;
	resultado = resultado / 2;

	bit16 = resultado % 2;
	resultado = resultado / 2;

	bit32 = resultado % 2;
	resultado = resultado / 2;

	printf("resultado= %d%d%d%d%d%d%d", resultado % 2, bit32, bit16, bit8, bit4, bit2, bit1);

	//----Exercicio 4 -----------------------------

	double salario, vendas, total;
	printf("Digite o salario fixo: ");
	scanf("%lf", &salario);
	printf("Digite o total em vendas: ");
	scanf("%lf", &vendas);

	total = salario + vendas * 0.15;

	printf("TOTAL = R$ %.2f\n", total);

	//----------------Exercicio 5----------------------------------------
	double num1, num2, num3, num4, soma, media, prod;
	printf("Digite o primeiro valor: ");
	scanf("%lf", &num1);
	printf("Digite o segundo valor: ");
	scanf("%lf", &num2);
	printf("Digite o terceiro valor: ");
	scanf("%lf", &num3);
	printf("Digite o quarto valor: ");
	scanf("%lf", &num4);

	soma = num1 +num2+ num3 +num4;     
	media = soma / 4;             
	prod = vnum1*num2*num3*num4;     

	printf("Soma = %.2f\n", soma);
	printf("Media = %.2f\n", media);
	printf("Produtorio = %.2f\n", prod);

	//---------Exercicio 6 -----------------------------

	int dias, anos, meses, resto, diasrest;
	printf("Digite sua idade: ");
	scanf("%d", &dias);

	anos = dias / 365;         
	resto = dias % 365;        
	meses = resto / 30;        
	diasrest = resto % 30;     

	printf("%d anos\n", anos);
	printf("%d meses\n", meses);
	printf("%d dias\n", diasrest);
	*/

	//-----------Exercicio 7 -----------------------------

	double raio, volume, pi;
	printf("Digite o raio da esfera: ");
	scanf("%lf", &raio);

	pi= 3.14159
	volume = (4 / 3.0) * pi * raio * raio * raio;

	printf("VOLUME = %.3f\n", volume);
	*/

	//-----------Exercicio 8----------------------------------------

	double x1, y1, x2, y2, d;
	printf("Digite x1: ");
	scanf("%lf", &x1);
	printf("Digite y1: ");
	scanf("%lf", &y1);
	printf("Digite x2: ");
	scanf("%lf", &x2);
	printf("Digite y2: ");
	scanf("%lf", &y2);

	
	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	printf("Distancia = %.2f\n", d);
	return 0;
}
