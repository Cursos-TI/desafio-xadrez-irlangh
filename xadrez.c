#include <stdio.h>

int main() {
    //MOVIMENTO DA TORRE(
    //A Torre move-se em linha reta horizontalmente ou verticalmente.
    //Simula 5 casas para a direita usando o laço FOR)
    int i;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    //MOVIMENTO DO BISPO(
    //O Bispo move-se em diagonais
    //Simula 5 casas na diagonal para cima e à direita usando o laço WHILE)
    int j = 1;
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    //MOVIMENTO DA RAINHA(
    //A Rainha move-se em todas as direções
    //Simula 8 casas para a esquerda usando o laço DO-WHILE)
    int k = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    //MOVIMENTO DO CAVALO(
    //O Cavalo move-se em L
    //Simula 2 casas para cima e 1 para a direita usando o laço WHILE e FOR)
    int l = 1;
    printf("Movimento do Cavalo (2 casas para cima e 1 para a Direita):\n");
    while (l--) {
        for (int m = 1; m <= 2; m++) {
            printf("Cima\n");
            
        }
        printf("Direita\n");

        printf("\n");
    }

    return 0;
}
