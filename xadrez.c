
#include <stdio.h>

int main() {
    // Movimento da Torre - Usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    // Movimento do Bispo - Usando WHILE
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    
    printf("\n");
    
    // Movimento da Rainha - Usando DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    
    printf("\n");
    
    // Movimento do Cavalo - Usando loops aninhados
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    
    // Primeiro loop (for) para as 2 casas para baixo
    for (int l = 1; l <= 2; l++) {
        printf("Baixo\n");
    }
    
    // Segundo loop (while) para a casa para a esquerda
    int m = 1;
    while (m <= 1) {
        printf("Esquerda\n");
        m++;
    }
    
    return 0;

}