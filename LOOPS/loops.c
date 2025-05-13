#include <stdio.h>

// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}

int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}

 /*char
int main() 
{
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2)
    {
        printf("%d \n", i);
    }
    return 0;
}


     letra;

    for (int i = 1; i <= 10; i++)
    {
        letra = 'a';

        for (int j = 1; j <= i; j++)
        {
            printf("%c ", letra);
            ++letra;
        }
        printf("\n");
    }


   
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    
    int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("Fogos de artifício!\n");
    
    int n = 10; // altura do triângulo
 
    fo/r (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((i + j) % 2 == 0) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
    
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\n", i * j);
        }
        printf("\n");
    }

    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);


    int i = 1;
    while (i <= 10) // loop externo
    {
        int j = 1; // variavel local

        while (j <= 10) // loop interno
        {
            printf("%d\t", i * j);
            j++; // incremento do loop interno
        }
        printf("\n");
        i++; // incremento do loop externo
    }

    int num, a;

    printf("digiti um numero para a tabuada\n");
    scanf("%d", &num);

    for (int a = 0; a <= 10; a ++)
    {
        printf("%d x %d = %d \n", a, num, a*num);    
    }

    int i = 0;

    while (i <=10)
    {
        if (i % 2 != 0)
        {
            printf("o numero %d é impar!\n", i);
        }

        i++;
    }

    int numero;

    do
    {
        printf("Digite um numero par para sair do programa...\n");
        scanf("%d", &numero);

        if(numero % 2 == 0)
        {
            printf("%d é par!\n", numero);
        }
        else 
        {
            printf("%d é impar!\n", numero);
        }

    } while (numero % 2 !=0);
    
    

}*/