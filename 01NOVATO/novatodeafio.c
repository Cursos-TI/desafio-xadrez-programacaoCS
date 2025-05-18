#include <stdio.h>

int main() {

    printf("DESAFIO XADREZ - NOVATO! \n");

    // Implementação de Movimento da Torre

    printf("Movimentação da Torre: \n");
    int torreMovimento = 5;
    for (int i = 0; i < torreMovimento; i++) {
         printf("Direita \n");
    }

    // Implementação de Movimento do Bispo

    printf("\nMovimentação do Bispo: \n");
    int bispoMovimento = 5;
    int i = 0;
    while (i < bispoMovimento) {
        printf("Cima, Direita \n");
        i++;
    }