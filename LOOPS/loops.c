#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    
    int num;
    do {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
       
        if (num == 10) {
            printf("Você digitou: %d\n", num);
        }
    } while (num <= 10);
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}