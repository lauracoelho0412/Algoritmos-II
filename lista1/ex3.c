
#include <stdio.h>

int soma(int vetor[], int tamanho){
    if(tamanho == 0){
        return 0;
    }
    return vetor[tamanho - 1] + soma(vetor,tamanho-1);
}
int main()
{
    int array[]={1,2,3,4,5};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int resp = soma(array,tamanho);
    printf("A soma do array é %d", resp);
    return 0;
}