#include <stdio.h>
/*
Movimentando as Peças do xadrez - Usando estruturas de repetição em C.

Este desafio foca na movimentação das peças de xadrez: 
Rei
Rainha
Torre
Bispo
Cavalo
Peão

printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");
*/

int main() {
    int casas;         // Número de casas para movimentar
    char direcao;      // Direção escolhida pelo usuário (um caractere)
    int opcao;         // Opção escolhida no menu
    int movimentocompleto = 1; // Flag para controlar o movimento em "L"
    char continuar = 'S';    // Flag para controlar o loop

    while (continuar == 'S' || continuar == 's') { // Loop principal do programa

    printf("***XADREZ***\n");
    printf("Escolha uma peça para mover:\n");
    printf("1 - Torre\n"); // Move-se em linha reta horizontalmente ou verticalmente. 
    printf("2 - Bispo\n"); // Move-se na diagonal.
    printf("3 - Rainha\n"); // Move-se em todas as direções.
    printf("4 - Peão\n"); // Move-se uma casa por vez.
    printf("5 - Cavalo\n"); // Move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".
    printf("6 - Rei\n"); // Move-se em todas as direçoes uma casa por vez.
    
    printf("Digite o número correspondente à peça: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: // TORRE

        printf("\nVocê escolheu a TORRE.\n");
        printf("Digite a quantidade de casas que a peça irá andar (no máximo 8): ");
        scanf("%d", &casas);

        if (casas < 1 || casas > 8)
        {
            printf("Número de casas inválido! Deve ser entre 1 e 8.\n");
            return 0;
        }

        printf("Escolha a direção:\n");
        printf("D - DIREITA\nE - ESQUERDA\nC - CIMA\nB - BAIXO\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento da torre:\n");

        for (int i = 1; i <= casas; i++)

        if (direcao == 'D' || direcao == 'd') {
            printf("Casa %d: Movendo para a direita\n", i);
        } else if (direcao == 'E' || direcao == 'e') {
            printf("Casa %d: Movendo para a esquerda\n", i);
        } else if (direcao == 'C' || direcao == 'c') {
            printf("Casa %d: Movendo para cima\n", i);
        } else if (direcao == 'B' || direcao == 'b') {
            printf("Casa %d: Movendo para baixo\n", i);
        } else {
            printf("Direção inválida! Programa encerrado.\n");
        }
        break;

    case 2: // BISPO

        printf("\nVocê escolheu o BISPO.\n");
        printf("Digite a quantidade de casas que a peça irá andar (no máximo 8): ");
        scanf("%d", &casas);

        if (casas < 1 || casas > 8) 
        {
            printf("Número de casas inválido! Deve ser entre 1 e 8.\n");
            return 0;
        }

        printf("Escolha a direção:\n");
        printf("D - CIMA, DIREITA\nE - CIMA, ESQUERDA\nC - BAIXO, DIREITA\nB - BAIXO, ESQUERDA\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento do bispo:\n");

        for (int i = 1; i <= casas; i++)

        if (direcao == 'D' || direcao == 'd')
        {
            printf("Casa %d: Movendo para cima e para direita\n", i);
        } else if (direcao == 'E' || direcao == 'e') {
            printf("Casa %d: Movendo para cima e para esquerda\n", i);
        } else if (direcao == 'C' || direcao == 'c') {
            printf("Casa %d: Movendo para baixo e para direita\n", i);
        } else if (direcao == 'B' || direcao == 'b') {
            printf("Casa %d: Movendo para baixo e para esquerda\n", i);
        } else {
            printf("Direção inválida! Programa encerrado.\n");
        }
        break;

    case 3: // RAINHA

        printf("\nVocê escolheu a RAINHA.\n");
        printf("Digite a quantidade de casas que a peça irá andar (no máximo 8): ");
        scanf("%d", &casas);

        if (casas < 1 || casas > 8)
        {
            printf("Número de casas inválido! Deve ser entre 1 e 8.\n");
            return 0;
        }

        printf("Escolha a direção:\n");
        printf("D - DIREITA\nE - ESQUERDA\nC - CIMA\nB - BAIXO\nA - CIMA, DIREITA\nS - CIMA, ESQUERDA\nF - BAIXO, DIREITA\nG - BAIXO, ESQUERDA\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento da Rainha:\n");

        for (int i = 1; i <= casas; i++)

        if (direcao == 'D' || direcao == 'd') {
           printf("Casa %d: Movendo para a direita\n", i);
        } else if (direcao == 'E' || direcao == 'e') {
           printf("Casa %d: Movendo para a esquerda\n", i);
        } else if (direcao == 'C' || direcao == 'c') {
           printf("Casa %d: Movendo para cima\n", i);
        } else if (direcao == 'B' || direcao == 'b') {
           printf("Casa %d: Movendo para baixo\n", i);
        } else if (direcao == 'A' || direcao == 'a') {
            printf("Casa %d: Movendo para CIMA, DIREITA\n", i);
        } else if (direcao == 'S' || direcao == 's') {
            printf("Casa %d: Movendo para cima, esquerda\n", i);
        } else if (direcao == 'F' || direcao == 'f') {
            printf("Casa %d: Movendo para baixo, direita\n", i);
        } else if (direcao == 'G' || direcao == 'g') {
            printf("Casa %d: Movendo para baixo, esquerda\n", i);
        } else {
           printf("Direção inválida! Programa encerrado.\n");
        } 
        break;

    case 4: // PEÃO

        do 
        {
            printf("\nDigite a quantidade de casas (1): ");
            scanf("%d", &casas);
            
        } while (casas < 1 || casas > 1); // Validação do valor

          printf("O peão irá andar %d casa para cima.\n", casas);

        break;

    case 5: // CAVALO

        printf("\nVocê escolheu o CAVALO.\n");

        // Pergunta ao usuário quantos movimentos deseja realizar
        printf("Quantos movimentos completos você deseja realizar? ");
        scanf("%d", &movimentocompleto);

        // Pergunta ao usuário qual direção deseja
        printf("Escolha a direção:\n");
        printf("D - CIMA, CIMA, DIREITA\n");
        printf("E - CIMA, CIMA, ESQUERDA\n");
        printf("C - BAIXO, BAIXO, DIREITA\n");
        printf("B - BAIXO, BAIXO, ESQUERDA\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento do cavalo:\n");

        while (movimentocompleto > 0)
        {
            for (int i = 0; i < 2; i++)
            {
                if (direcao == 'D' || direcao == 'd' || direcao == 'E' || direcao == 'e')
                {
                    printf("cima\n");
                } else if (direcao == 'C' || direcao == 'c' || direcao == 'B' || direcao == 'b')
                {
                    printf("baixo\n");
                }
            }
    
            // Movimento horizontal (direita ou esquerda)
            if (direcao == 'D' || direcao == 'd' || direcao == 'C' || direcao == 'c')
            {
                printf("direita\n");
            } else if (direcao == 'E' || direcao == 'e' || direcao == 'B' || direcao == 'b')
            {
                printf("esquerda\n");
            }
    
            movimentocompleto--; // Decrementa o número total de movimentos completos

        }

        break;
         
    case 6: // REI
    default: // 

        printf("Lamento nao conseguir entender sua ação!!!");

        break;
    }

    printf("\nDeseja continuar? (S/N): ");
    scanf(" %c", &continuar);
}

    printf("Programa encerrado.\n");

    return 0;

}