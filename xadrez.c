#include <stdio.h>

// Função recursiva para o movimento da Torre
void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimentoTorre(casas - 1); // Chamada recursiva para mover uma casa a mais
    }
}

// Função recursiva para o movimento do Bispo (Diagonal para cima e à direita)
void movimentoBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        movimentoBispo(casas - 1); // Chamada recursiva para mover uma casa a mais
    }
}

// Função recursiva para o movimento da Rainha (Horizontal e Vertical)
void movimentoRainhaHorizontal(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimentoRainhaHorizontal(casas - 1); // Chamada recursiva para mover uma casa a mais
    }
}

void movimentoRainhaVertical(int casas) {
    if (casas > 0) {
        printf("Baixo\n");
        movimentoRainhaVertical(casas - 1); // Chamada recursiva para mover uma casa a mais
    }
}

// Função recursiva para o movimento do Cavalo (2 para cima e 1 para a direita)
void movimentoCavalo(int vezes) {
    for (int i = 0; i < vezes; i++) {
        for (int j = 0; j < 2; j++) { // Loop para o movimento vertical (cima)
            printf("Cima\n");
        }
        printf("Direita\n"); // Movimento horizontal do cavalo
    }
}

int main() {
    // Movimento da Torre (5 casas para a Direita)
    printf("Movimento da Torre (5 casas para a Direita):\n");
    movimentoTorre(5);
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    movimentoBispo(5);
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    movimentoRainhaHorizontal(8);
    printf("\n");

    // Movimento da Rainha (4 casas para baixo)
    printf("Movimento da Rainha (4 casas para Baixo):\n");
    movimentoRainhaVertical(4);
    printf("\n");

    // Movimento do Cavalo (2 casas para cima e 1 para a Direita)
    printf("Movimento do Cavalo (2 casas para cima e 1 para a Direita):\n");
    movimentoCavalo(1); // O cavalo faz o movimento uma vez (2 para cima e 1 para a direita)
    printf("\n");

    return 0;
}
