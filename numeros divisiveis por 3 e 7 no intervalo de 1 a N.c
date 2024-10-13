#include <stdio.h>

int main() {
    int N;

    // Leitura do valor de N pelo teclado
    printf("Digite um valor para N: ");
    scanf("%d", &N);

    // Mostra os números divisíveis por 3 e 7 no intervalo de 1 a N
    printf("Números divisíveis por 3 e por 7 no intervalo de 1 a %d:\n", N);
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}