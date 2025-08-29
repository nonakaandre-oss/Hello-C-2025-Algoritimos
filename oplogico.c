# include <stdio.h>

int main() {
   int idade, genero;
   printf("Digite a idade: ");
   scanf("%d", &idade);
   printf("Digite o genero [0] Masculino, [1] Feminino: ");
   scanf("%d", &genero);

   if(idade < 18 || (genero == 1)) {
        printf("Não precisa de alistamento militar\n");
   } else {
       printf("Precisa de alistamento militar|n");
   }

  return 0;
}