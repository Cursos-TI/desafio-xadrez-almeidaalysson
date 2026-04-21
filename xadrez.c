#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
int bispo = 1;
int torre = 1;
int rainha = 1;
int cavalo = 1;

    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo (5 casas para diagonal da direita)\n");
    while(bispo <= 5) 
    {
        printf("CIMA/DIREITA\n");
    bispo++;
    }
    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre (3 casas para cima)\n");
    do 
    {
        printf("CIMA\n");
        torre++;
    } while (torre <= 3);
    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha (4 casas para a esquerda)\n");
    for (rainha; rainha <= 4; rainha++) 
    {
        printf("ESQUERDA\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    printf("Movimentação do cavalo (2 casas para cima e 1 para esquerda)\n");
    while (cavalo--)
    {
        for(int i = 0; i < 2; i++)
        {
            printf("CIMA \n");
        }
    printf("ESQUERDA\n");
    }
    
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
