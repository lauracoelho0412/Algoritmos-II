
#include <stdio.h>

int inverte(int numero){ 
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
    int invertido = 0;
    for (int i = qtd - 1; i >= 0; i--) {
        invertido = invertido * 10 + vetor[i];
    }

    return invertido;
}

int main() {
    int num;
    printf("Digite qualquer número para invertermos sua ordem: ");
    scanf("%d", &num);

    int resultado = inverte(num);
    printf("Número invertido: %d\n", resultado);

    return 0;
}