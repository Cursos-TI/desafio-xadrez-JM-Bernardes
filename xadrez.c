#include <stdio.h>

int main() {
    int i;
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    printf("Movimento da Torre:\n");
    for (i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < movimentoBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentoRainha);

    return 0;
}
