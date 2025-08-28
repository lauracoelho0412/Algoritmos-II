#include <stdio.h>

float total(float array[], float tamanho){
    float soma = 0;
    for(int i=0;i<tamanho;i++){
        soma += array[i];
    }
    float media = soma/tamanho;
    return media;
}

int main() {
    float notas[] = {10,5,8,6,7};
    float largura = sizeof(notas) / sizeof(notas[0]);
    float resultado = total(notas, largura);
    printf("%f", resultado);
    return 0;
}