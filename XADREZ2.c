#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas, char direcao, int atual)
{
    if (atual > casas)
    {
        return;
    }

    printf("Casa %d: ", atual);

    switch (direcao)
    {
    case 'D':
    case 'd':
        printf("Movendo para a direita\n");
        break;
    case 'E':
    case 'e':
        printf("Movendo para a esquerda\n");
        break;
    case 'C':
    case 'c':
        printf("Movendo para cima\n");
        break;
    case 'B':
    case 'b':
        printf("Movendo para baixo\n");
        break;
    default:
        printf("Direção inválida! Programa encerrado.\n");
        return;
    }

    moverTorre(casas, direcao, atual + 1);
}

// Função recursiva para mover o bispo usando loops aninhados
void moverBispo(int casas, char direcao, int x, int y, int atual)
{
    if (atual > casas)
    {
        return;
    }

    printf("Casa %d: ", atual);

    switch (direcao)
    {
    case 'D':
    case 'd': // Diagonal superior direita
        for (int i = 0; i < 1; i++)
        { // Loop externo para o movimento vertical
            for (int j = 0; j < 1; j++)
            { // Loop interno para o movimento horizontal
                x++;
                y++;
            }
        }
        printf("Movendo para diagonal superior direita\n");
        break;

    case 'E':
    case 'e': // Diagonal superior esquerda
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                x--;
                y++;
            }
        }
        printf("Movendo para diagonal superior esquerda\n");
        break;

    case 'I':
    case 'i': // Diagonal inferior esquerda
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                x--;
                y--;
            }
        }
        printf("Movendo para diagonal inferior esquerda\n");
        break;

    case 'S':
    case 's': // Diagonal inferior direita
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < 1; j++)
            {
                x++;
                y--;
            }
        }
        printf("Movendo para diagonal inferior direita\n");
        break;

    default:
        printf("Direção inválida! Programa encerrado.\n");
        return;
    }

    moverBispo(casas, direcao, x, y, atual + 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas, char direcao, int atual)
{
    if (atual > casas)
    {
        return;
    }

    printf("Casa %d: ", atual);

    switch (direcao)
    {
    case 'D':
    case 'd':
        printf("Movendo para a direita\n");
        break;
    case 'E':
    case 'e':
        printf("Movendo para a esquerda\n");
        break;
    case 'C':
    case 'c':
        printf("Movendo para cima\n");
        break;
    case 'B':
    case 'b':
        printf("Movendo para baixo\n");
        break;
    case 'S':
    case 's':
        printf("Movendo para diagonal superior direita\n");
        break;
    case 'I':
    case 'i':
        printf("Movendo para diagonal superior esquerda\n");
        break;
    case 'M':
    case 'm':
        printf("Movendo para diagonal inferior esquerda\n");
        break;
    case 'N':
    case 'n':
        printf("Movendo para diagonal inferior direita\n");
        break;

    default:
        printf("Direção inválida! Programa encerrado.\n");
        return;
    }

    moverRainha(casas, direcao, atual + 1);
}

int main()
{
    int casas, x, y, movimentos = 1; // Número de casas para movimentar
    char direcao;                   // Direção escolhida pelo usuário (um caractere)
    int opcao;                     // Opção escolhida no menu

    printf("***XADREZ***\n");
    printf("Escolha uma peça para mover:\n");
    printf("1 - Torre\n");        // Move-se em linha reta horizontalmente ou verticalmente.
    printf("2 - Bispo\n");       // Move-se na diagonal.
    printf("3 - Rainha\n");     // Move-se em todas as direções.
    printf("4 - Peão\n");      // Move-se uma casa por vez.
    printf("5 - Cavalo\n");   // Move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".
    printf("6 - Rei\n");     // Move-se em todas as direçoes uma casa por vez.

    printf("\nDigite o número correspondente à peça: ");
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
        moverTorre(casas, direcao, 1);

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
        printf("D - Diagonal superior direita\nE - Diagonal superior esquerda\n");
        printf("I - Diagonal inferior esquerda\nS - Diagonal inferior direita\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento do bispo:\n");
        moverBispo(casas, direcao, x, y, 1);

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
        printf("D - DIREITA\nE - ESQUERDA\nC - CIMA\nB - BAIXO\nS - DIAGONAL SUPERIOR DIREITA\nI - DIAGONAL SUPERIOR ESQUERDA\nM - DIAGONAL INFERIOR ESQUERDA\nN - DIAGONAL INFERIOR DIREITA\n");
        printf("Digite a letra correspondente: ");
        scanf(" %c", &direcao);

        printf("Movimento da rainha:\n");
        moverRainha(casas, direcao, 1);

        break;

    case 4: // PEÃO

        do
        {
            printf("\nDigite a quantidade de casas (no máximo 1): ");
            scanf("%d", &casas);

        } while (casas < 1 || casas > 1); // Validação do valor

        printf("O peão irá andar %d casa para cima.\n", casas);

        break;

    case 5: // CAVALO

        printf("\nMovimentos do cavalo:\n");

        while (movimentos > 0)
        {
            for (int i = 0; i < 2; i++)
            { // Duas casas para cima
                printf("Cima\n");
            }

            printf("Direita\n"); // Uma casa para a direita

            printf("\n"); // Linha em branco para separar a saída de cada movimento completo

            movimentos--; // Decrementa o número de movimentos restantes
        }

        break;

    case 6: // REI

        // Validação do movimento do Rei (sempre 1 casa)
        do
        {
            printf("\nDigite a quantidade de casas (no máximo 1): ");
            scanf("%d", &casas);
        } while (casas < 1 || casas > 1);

        // Escolha da direção
        printf("Agora, vamos escolher a direção:\n");
        printf("D - DIREITA\nE - ESQUERDA\nC - CIMA\nB - BAIXO\nS - DIAGONAL SUPERIOR DIREITA\nI - DIAGONAL SUPERIOR ESQUERDA\nM - DIAGONAL INFERIOR ESQUERDA\nN - DIAGONAL INFERIOR DIREITA\n");
        printf("Digite a letra correspondente: ");
        scanf(" %s", &direcao);

        // Movimentação do Rei
        printf("O rei irá andar 1 casa para ");

        if (direcao == 'C' || direcao == 'c')
        {
            printf("cima.\n");
        }
        else if (direcao == 'B' || direcao == 'b')
        {
            printf("baixo.\n");
        }
        else if (direcao == 'D' || direcao == 'd')
        {
            printf("direita.\n");
        }
        else if (direcao == 'E' || direcao == 'e')
        {
            printf("esquerda.\n");
        }
        else if (direcao == 'S' || direcao == 's')
        {
            printf("diagonal superior direita.\n");
        }
        else if (direcao == 'I' || direcao == 'i')
        {
            printf("diagonal superior esquerda.\n");
        } 
        else if (direcao == 'S' || direcao == 's')
        {
            printf("diagonal inferior esquerda.\n");
        }
        else if (direcao == 'N' || direcao == 'n')
        {
            printf("diagonal inferior direita.\n");
        } 
        else if (direcao == 'M' || direcao == 'm')
        {
            printf("diagonal inferior esquerda.\n");
        }
        else
        {
            printf("Direção inválida! Programa encerrado.\n");
        }

        break;

    default:

        printf("Lamento nao conseguir entender sua ação!!!");

        break;
    }

    printf("\nPrograma encerrado.\n");
    return 0;
}
