#include <stdio.h>

int fibonacci(int termos){
    int sequencia[termos];
    for(int i=0;i<termos;i++){
        if (i==0 || i==1){
            sequencia[i]=i;
        }else{
         sequencia[i] = (sequencia[i-1])+(sequencia[i-2]);
        }
        printf("%d ",sequencia[i]);
    }
}

int main()
{
    int num;
    printf("Digite o número de termos que você quer que apareça da sequência fibonacci:");
    scanf("%d", &num);
    fibonacci(num);

    return 0;
}