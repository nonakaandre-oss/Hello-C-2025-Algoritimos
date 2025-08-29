#include <stdio.h>

int main() {
    int idade = 0;
    printf("Digite uma idade: ");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Possui maioridade Legal\n");
      }  else { 
        printf("Menor de Idade\n");
    }
    printf("Valor Digitado: %d\n");
    return 0;
}