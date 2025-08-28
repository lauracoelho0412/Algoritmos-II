#include <stdio.h>

int maior(int array[], int tamanho){
    int maior = 0;
    for(int i=0;i<tamanho;i++){
        if(array[i]>maior){
            maior = array[i];
        }
    }
    return maior;
}

int main() {
    int inteiros[] = {18,5,10,23,14,67,42};
    int largura = sizeof(inteiros) / sizeof(inteiros[0]);
    int resultado = maior(inteiros, largura);
    printf("%d", resultado);
    return 0;
}