#include <stdio.h>

int qtdvezes(int numero, int digito){
    if(numero == 0){
        return 0;
    }
    if(numero%10 == digito){
        return qtdvezes(numero/10, digito)+1;
    }
    return qtdvezes(numero/10, digito);
}

int main() {
   int num;
   int digito;
   printf("Digite um número:");
   scanf("%d",&num);
   printf("Digite o digito que você gostaria de contar a repetição:");
   scanf("%d",&digito);
   int resp = qtdvezes(num, digito);
   printf("O digito %d aparece %d vezes em %d", digito, resp, num);
    return 0;
}
