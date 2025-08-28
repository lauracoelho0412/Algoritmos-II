
#include <stdio.h>

int produto (int array[], int tamanho){
    if (tamanho == 0){
        return 1;
    }
    return array[tamanho-1] * produto(array,tamanho-1);
}

int main()
{
    int v[]= {1,2,3,4,5};
    int resp = produto(v,5);
    printf("%d", resp);

    return 0;
}