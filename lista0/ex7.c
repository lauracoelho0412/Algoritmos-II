#include <stdio.h>

int tres(int numero){
    int temp = numero;
    int qtd = 0;
     while (temp > 0) {
        temp /= 10;
        qtd++;
    }
    int vetor[qtd];
    temp = numero;
    for (int i = qtd - 1; i >= 0; i--) {
        vetor[i] = temp % 10;
        temp /= 10;
    }
    int contagem = 0;
    for(int i=0;i<qtd;i++){
        if (vetor[i]==3){
            contagem++;
        }
    }
    if(contagem>0){
        printf("Tem %d digito três no número %d",contagem,numero);
        }else{
            printf("Não tem nenhum digito três no número %d", numero);
        }
}

int main()
{
    int num;
    printf("Digite qualquer número para vermos se contem o número 3:");
    scanf("%d", &num);
    tres(num);

    return 0;
}