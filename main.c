/******************************************************************************

Crie um programa que imprima a soma dos valores pares e 
a soma dos valores ímpares entre dois números quaisquer digitados pelo usuário.

*******************************************************************************/
#include <stdio.h>


int main() {
    int num1, num2, soma_pares = 0, soma_impares = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) { 
            soma_pares += i;
        } else {
            soma_impares += i;
        }
    }

    printf("A soma dos valores pares entre %d e %d é: %d\n", num1, num2, soma_pares);
    printf("A soma dos valores ímpares entre %d e %d é: %d\n", num1, num2, soma_impares);

    return 0; 
}
