#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre - Funções Recursivas e Loops Aninhados

void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas)
{
    if (casas > 0) // casas sendo maior que zero, executa os loops
    {
        for (int cima = 0; cima < 1; cima++) // Para as casas na vertical
        {
            printf("Cima -> ");

            for (int direita = 0; direita < 1; direita++) // Para as casas na horizontal
            {
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main()
{
    printf("*** Movimentação de peças de xadrez ***\n"); // Título do programa
    printf("Movimentos da torre:\n");                    // Início dos movimentos da torre
    moverTorre(5);

    printf("\n"); // Espaço para melhor organização

    printf("Movimentos do Bispo:\n"); // Início dos movimentos do bispo
    moverBispo(5);

    printf("\n"); // Espaço para melhor organização

    printf("Movimentos da rainha:\n"); // Início dos movimentos da rainha
    moverRainha(8);

    printf("\n"); // Espaço para melhor organização

    printf("Movimentos do cavalo:\n"); // Início dos movimentos do cavalo

    for (int cavalo = 0; cavalo < 2; cavalo++) // Enquanto menor que dois, o loop interno se repete completamente
    {
        printf("Cima\n"); // Direção para onde o cavalo está se movendo

        while (cavalo > 0 && cavalo <= 1)
        {
            cavalo++;         // Incremento de um movimento
            printf("Direita\n"); // Direção para onde o cavalo está se movendo
        }
    }

    return 0;
}
