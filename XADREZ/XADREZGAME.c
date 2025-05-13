#include <stdio.h>

void moverTorre(int casas, char direcao, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Movendo para %s\n", atual,
           direcao == 'D' || direcao == 'd' ? "direita" :
           direcao == 'E' || direcao == 'e' ? "esquerda" :
           direcao == 'C' || direcao == 'c' ? "cima" :
           direcao == 'B' || direcao == 'b' ? "baixo" : "direção inválida");
    moverTorre(casas, direcao, atual + 1);
}

void moverBispo(int casas, char direcao1, char direcao2, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Movendo para diagonal %s %s\n", atual,
           direcao1 == 'C' || direcao1 == 'c' ? "superior" : "inferior",
           direcao2 == 'D' || direcao2 == 'd' ? "direita" : "esquerda");
    moverBispo(casas, direcao1, direcao2, atual + 1);
}

void moverRainha(int casas, char direcao, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Movendo para %s\n", atual,
           direcao == 'D' || direcao == 'd' ? "direita" :
           direcao == 'E' || direcao == 'e' ? "esquerda" :
           direcao == 'C' || direcao == 'c' ? "cima" :
           direcao == 'B' || direcao == 'b' ? "baixo" :
           direcao == 'I' || direcao == 'i' ? "diagonal" : "direção inválida");
    moverRainha(casas, direcao, atual + 1);
}

void moverRei(int casas, char direcao, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Movendo uma casa para %s\n", atual,
           direcao == 'D' || direcao == 'd' ? "direita" :
           direcao == 'E' || direcao == 'e' ? "esquerda" :
           direcao == 'C' || direcao == 'c' ? "cima" :
           direcao == 'B' || direcao == 'b' ? "baixo" : "direção inválida");
    moverRei(casas, direcao, atual + 1);
}

void moverCavalo(int casas, int atual) {
    if (atual > casas) return;
    printf("Movimento %d: Cavalo movendo-se em 'L'\n", atual);
    moverCavalo(casas, atual + 1);
}

void moverPeao(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Peão movendo uma casa para frente\n", atual);
    moverPeao(casas, atual + 1);
}

int main() {
    int casas, opcao;
    char direcao, direcao1, direcao2, continuar = 'S';

    while (continuar == 'S' || continuar == 's') 
    {
        printf("**XADREZ**\nEscolha uma peça para mover:\n");
        printf("1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Peão\n5 - Cavalo\n6 - Rei\n");
        printf("Digite o número correspondente à peça: ");
        scanf("%d", &opcao);

        printf("Digite a quantidade de casas que a peça irá andar (máx. 8): ");
        scanf("%d", &casas);
        if (casas < 1 || casas > 8) {
            printf("Número inválido! Deve ser entre 1 e 8.\n");
            continue;
        }

        if (opcao == 1) {
            printf("Escolha a direção (D - Direita, E - Esquerda, C - Cima, B - Baixo): ");
            scanf(" %c", &direcao);
            printf("Movimento da Torre:\n");
            moverTorre(casas, direcao, 1);
        } else if (opcao == 2) {
            printf("Escolha a direção diagonal (C/B para cima/baixo e D/E para direita/esquerda): ");
            scanf(" %c %c", &direcao1, &direcao2);
            printf("Movimento do Bispo:\n");
            moverBispo(casas, direcao1, direcao2, 1);
        } else if (opcao == 3) {
            printf("Escolha a direção (D - Direita, E - Esquerda, C - Cima, B - Baixo, I - Diagonal): ");
            scanf(" %c", &direcao);
            printf("Movimento da Rainha:\n");
            moverRainha(casas, direcao, 1);
        } else if (opcao == 4) {
            printf("Movimento do Peão:\n");
            moverPeao(casas, 1);
        } else if (opcao == 5) {
            printf("Movimento do Cavalo:\n");
            moverCavalo(casas, 1);
        } else if (opcao == 6) {
            printf("Escolha a direção (D - Direita, E - Esquerda, C - Cima, B - Baixo): ");
            scanf(" %c", &direcao);
            printf("Movimento do Rei:\n");
            moverRei(casas, direcao, 1);
        } else {
            printf("Opção inválida! Programa encerrado.\n");
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
    }

    return 0;
}