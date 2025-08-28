#include <stdio.h>

int main()
{
    int multa(int velomax, int velomot ){
        if(velomot<=velomax){
            return printf("Não há multa!");
        }
        int qtdAcima = velomot - velomax;
        int valor = qtdAcima * 5;
        return printf("A multa é de %d reais", valor);
    }
    multa(50,50);

    return 0;
}
