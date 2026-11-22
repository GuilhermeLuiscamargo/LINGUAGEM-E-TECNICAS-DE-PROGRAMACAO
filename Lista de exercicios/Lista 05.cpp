#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//---------------------------FUNÇÔES DOS EXERCICIOS----------------------------------------------------------------------
//recebe 100 numeros e devolve na ordem inversa do maior para o menor
int ordemInversa(void) {

    int numeros[100];
    int i, j, auxiliar;

    // Leitura dos 100 numeros
    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Exibe os numeros na ordem inversa
    printf("\nNumeros na ordem inversa:");

    for (i = 99; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    // Ordena os numeros do maior para o menor
    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (numeros[i] < numeros[j]) {
                auxiliar = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = auxiliar;
            }
        }
    }

    // Exibe os numeros ordenados
    printf("\n\nNumeros do maior para o menor:\n");

    for (i = 0; i < 100; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
//recebe um valor e devolve a notação cientifica aproximada do mesmo
int notacao(void) {
    double numero, coeficiente;
    int expoente = 0;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);
    coeficiente = numero;

    while (coeficiente >= 10) {
        coeficiente /= 10;
        expoente++;
    }

    while (coeficiente < 1) {
        coeficiente *= 10;
        expoente--;
    }

    printf("\nNotacao cientifica: %.6f x 10^%d\n", coeficiente, expoente);

    return 0;
}
//recebe um valor de 1 até 62 e retorna o valor binario do mesmo
int baseBinaria(void) {
    int num, binario[7];
    int i = 0, j;

    printf("Digite um numero entre 1 e 64: ");
    scanf("%d", &num);

    while (num > 0) {
        binario[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("\nNumero em binario: ");

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }

    printf("\n");

    return 0;
}
//recebe 10 valores inteiros e devolve o maior entre eles
int maiorAB(void) {
    int a, b, maior, i;

    printf("Digite o 1 numero: ");
    scanf("%d", &a);

    for (i = 2; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &b);

        maior = (a + b + abs(a - b)) / 2;

        a = maior;
    }

    printf("\n%d eh o maior\n", maior);

    return 0;
}
//verifica 100 numeros inteiros digitados e informa sua pariedade e primalidade
int pariedade(void) {
    int numeros[100];
    int i, j, primo;

    // Leitura dos 100 numeros
    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Verifica paridade e primalidade
    for (i = 0; i < 100; i++) {
        printf("\nNumero: %d\n", numeros[i]);

        // Verifica se e par ou impar
        if (numeros[i] % 2 == 0) {
            printf("Paridade: Par\n");
        } else {
            printf("Paridade: Impar\n");
        }

        // Verifica se e primo
        primo = 1;

        if (numeros[i] <= 1) {
            primo = 0;
        } else {
            for (j = 2; j <= numeros[i] / j; j++) {
                if (numeros[i] % j == 0) {
                    primo = 0;
                    break;
                }
            }
        }

        if (primo == 1) {
            printf("Primalidade: Primo\n");
        } else {
            printf("Primalidade: Nao primo\n");
        }
    }

    return 0;
}
//realiza o calculo do plano cartesiano de 10 numeros informados
int planoCartesiano(void) {
    double x1[10], y1[10], x2[10], y2[10];
    double distancia;
    int i;

    // Leitura das coordenadas
    for (i = 0; i < 10; i++) {
        printf("\nPontos %d:\n", i + 1);

        printf("Digite x1: ");
        scanf("%lf", &x1[i]);

        printf("Digite y1: ");
        scanf("%lf", &y1[i]);

        printf("Digite x2: ");
        scanf("%lf", &x2[i]);

        printf("Digite y2: ");
        scanf("%lf", &y2[i]);
    }

    // Calculo das distancias
    for (i = 0; i < 10; i++) {
        distancia = sqrt(
            (x2[i] - x1[i]) * (x2[i] - x1[i]) +
            (y2[i] - y1[i]) * (y2[i] - y1[i])
        );

        printf("\nDistancia entre os pontos %d: %.2lf",
               i + 1, distancia);
    }

    printf("\n");

    return 0;
}
//verifica se existe uma ordem consecutiva em uma sequencia de numeros digitados e imprimi a sequencia na tela
int ordemConsecutiva(void) {
    int numeros[10];
    int i, encontrou = 0;

    // Leitura dos 100 numeros
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros consecutivos encontrados:\n");

    // Verifica os numeros consecutivos
    for (i = 0; i < 9; i++) {
        if (numeros[i] < numeros[i + 1] &&
            numeros[i + 1] - numeros[i] == 1) {

            if (encontrou == 0 ||
                i == 0 ||
                numeros[i] - numeros[i - 1] != 1) {
                printf("\n%d", numeros[i]);
            }

            printf(" %d", numeros[i + 1]);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero consecutivo encontrado.");
    }

    printf("\n");

    return 0;
}
//--------------------------------------------------------------------------------------------------------------------


int main(){
	
//ordemInversa();
//notacao();	
//baseBinaria();	
//maiorAB();
//pariedade();
//planoCartesiano();	
//ordemConsecutiva();		
return 0;
}




