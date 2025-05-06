#include <stdio.h>

int main() {
    //MOVIMENTO DA TORRE(
    //A Torre move-se em linha reta horizontalmente ou verticalmente.
    //Simula 5 casas para a direita usando o laço FOR)
    int T;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (T = 1; T <= 5; T++) {
        printf("Direita\n");
    }

    printf("\n");

    //MOVIMENTO DO BISPO(
    //O Bispo move-se em diagonais
    //Simula 5 casas na diagonal para cima e à direita usando o laço WHILE)
    int B = 1;
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (B <= 5) {
        printf("Cima Direita\n");
        B++;
    }

    printf("\n");

    //MOVIMENTO DA RAINHA(
    //A Rainha move-se em todas as direções
    //Simula 8 casas para a esquerda usando o laço DO-WHILE)
    int R = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        R++;
    } while (R <= 8);

    return 0;
}
