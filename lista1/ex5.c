
#include <stdio.h>

int collatz (int n){
    int resultado = n;
    if(resultado % 2 == 0){
        resultado /= 2;
    } else{
        resultado = 3*resultado + 1;
    }
    if (resultado == 1){
        return 1;
    }
    printf("%d\n", resultado);
    collatz(resultado);
}

int main()
{
    int num;
    printf("Digite um número:");
    scanf("%d",&num);
    collatz(num);

    return 0;
}