#include <stdio.h>

void torre(int casas){ // RECURSIVIDADE TORRE
if(casas > 0){ // CONDIÇÃO PARA CONTROLE DE REPETIÇÃO
    printf("CIMA\n");

    torre(casas - 1); // DECREMENTO
    }
}
void rainha(int casas){ // RECURSIVIDADE RAINHA
    if(casas > 0){ //  CONDIÇÃO PARA CONTROLE DE REPETIÇÃO
        printf("ESQUERDA\n");

        rainha(casas - 1); // DECREMENTO
    }
}

int main() {

    char mov1[10] = "CIMA", mov2[10] = "BAIXO", mov3[10] = "ESQUERDA", mov4[10] = "DIREITA";
    int cavalo = 1;

    // BISPO - LOOP AVANÇADO DE MULTIPLAS VARIÁVEIS E CONDIÇÕES
    printf("Movimentação do Bispo (5 casas para diagonal da direita para cima)\n");
    for (int casabispo1 = 1, casabispo2 = 1; casabispo1 <= 5 && casabispo2 <= 5; casabispo1++, casabispo2++){
        printf("%s, %s\n", mov1, mov4);
    }
        printf("\n");

    // TORRE - RECURSIVIDADE
    printf("Movimentação da Torre (3 casas para cima)\n");
    torre(3); // CHAMANDO A RECURSIVIDADE
    printf("\n");

    // RAINHA - RECURSIVIDADE
    printf("Movimentação da Rainha (4 casas para a esquerda)\n");
    rainha(4); // CHAMANDO RECURSIVIDADE.
    printf("\n");

    // CAVALO - LOOP ANINHADO
    printf("Movimentação do cavalo (2 casas para cima e 1 para esquerda)\n");
    while (cavalo--) 
    {
        for(int i = 0; i < 2; i++) 
        {
            printf("CIMA \n");
        }
    printf("ESQUERDA\n"); // 
    }
    
    

    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
