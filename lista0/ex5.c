#include <stdio.h>

  int salario(int horas, int valorHora){
        int salarioTotal = horas*valorHora;
        int diferença = horas - 40;
       if(horas>40 && horas<=60){
           salarioTotal += diferença*(valorHora/2);
       }
       else if(horas>60){
           salarioTotal += diferença*valorHora;
       }
       return printf("O salário é de %d reais", salarioTotal);
    }
    
int main()
{
    int hr;
    int vh = 8;
    printf("Digite o número correspondente as horas trabalhadas:");
    scanf("%d", &hr);
    salario(hr,vh);
    return 0;
}
