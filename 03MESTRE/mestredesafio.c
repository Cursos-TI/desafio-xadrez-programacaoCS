#include <stdio.h>

// Função recursiva para simular o movimento da Torre

void torreMovimento(int movimento) {
    if (movimento > 0) {
        printf("Direita\n");
        torreMovimento(movimento - 1);
    }
}

// Função recursiva para simular o movimento do Bispo

void bispoMovimento(int movimento) {
    if (movimento > 0) {
        printf("Cima, Direita\n");
        bispoMovimento(movimento - 1);
    }
}