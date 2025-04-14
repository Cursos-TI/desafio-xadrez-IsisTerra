#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças

int main()
{
    int torre = 0;     // Declaração e inicialização da variável torre
    int bispo, rainha; // Declaração das variáveis bispo e rainha

    printf("*** Movimentação de peças de xadrez ***\n"); // Título do programa
    printf("Movimentos da torre:\n");                    // Início dos movimentos da torre

    while (torre < 5) // Enquanto torre for menor que 5 ocorrerá repetição do código
    {
        printf("Direita\n"); // Direção para onde a torre está se movendo
        torre++;             // Incremento a cada casa movida
    }

    printf("\n");                     // Espaço para melhor organização
    printf("Movimentos do Bispo:\n"); // Início dos movimentos do bispo

    do // Execute o código, verifique se a condição é verdadeira, então repita até ser falsa
    {
        printf("Cima, Direita\n"); // Direção para onde o bispo está se movendo
        bispo++;                   // Incremento a cada casa movida

    } while (bispo < 5); // Enquanto bispo for menor que 5 ocorrerá repetição do código

    printf("\n");                      // Espaço para melhor organização
    printf("Movimentos da rainha:\n"); // Início dos movimentos da rainha

    for (rainha = 0; rainha < 8; rainha++) // Inicialização da variável rainha. Enquanto rainha for menor que 8 a execução do código irá se repetir. Incremento para cada movimento feito.
    {
        printf("Esquerda\n"); // Direção para onde o bispo está se movendo
    }

    return 0;
}

// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.