#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    int resultado;
    resultado = num1 + num2;

    printf("Resultado: %i", resultado);
    printf("\n%i + %i = %i", num1, num2, resultado);

    return 0;
}