#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

const int numeroDeMovimentos = 5;

char* getDirecao(char direcao){
    switch (direcao){
        case 'c': return "Cima";
        case 'b': return "Baixo";
        case 'e': return "Esquerda";
        case 'd': return "Direita";
        default: return "Direção inválida!";
    }
}

/* direcao pode ser C,B,E ou D */
void moveHorizontalVertical(char direcao){
    int i;
    for (i = 1; i <= numeroDeMovimentos; i++){
        printf("%s\n", getDirecao(direcao));
    }
}

/* direcao pode ser C,B,E ou D */
void moveDiagonal(char direcaoH, char direcaoV){
    int i = 1;
    while (i <= numeroDeMovimentos){
        printf("%s/%s\n", getDirecao(direcaoH), getDirecao(direcaoV));
        i++;
    }
}

void moveCavalo(){
    printf("(");
    for (int i = 1; i <= 2; i++){
        if (i  > 1) {
             printf(", ");
        }
        printf("%s", getDirecao('b'));
        if (i % 2 == 0){
            printf(", %s", getDirecao('e'));
        }
    }
    printf(")\n");
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //moveHorizontalVertical('c');
    //moveDiagonal('e', 'c');
    moveCavalo();

    return 0;
}
