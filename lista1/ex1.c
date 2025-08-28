
#include <stdio.h>

int iterativa(int numero){
    int resultado = 1;
    for(int i=2;i<=numero;i++){
        resultado *= i;
    }
    printf("O fatorial de %d é %d", numero, resultado);
}

int recursiva(int numero){
    if (numero == 0 || numero == 1) {
        return 1;
    }
    return numero * recursiva(numero - 1); 
}

int main()
{
    int num;
    printf("Digite um número:");
    scanf("%d",&num);
    int resp = recursiva(num);
    printf("O fatorial de %d é %d", num, resp);
    return 0;
}