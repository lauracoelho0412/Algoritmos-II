
#include <stdio.h>

int resultado(int b, int p){
    if(p==1){
        return b;
    }
    return b * resultado(b,p-1);
}
int main()
{
    int base, potencia;
    printf("Digite um número para base:");
    scanf("%d",&base);
    printf("Agora outro para potência:");
    scanf("%d",&potencia);
    int resp = resultado(base,potencia);
    printf("O resultado é %d", resp);
    return 0;
}