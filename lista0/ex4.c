
#include <stdio.h>

int main()
{
    int dias(int m, int a){
        switch(m){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("O mês possui 31 dias!");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("O mês possui 30 dias!");
                break;
            case 2:
                if(a % 4 == 0){
                    printf("O mês possui 29 dias!");
                } else{
                    printf("O mês possui 28 dias!");
                }
                break;
        }
    }
    int mes;
    int ano;
    printf("Digite o número correspondente ao mês e o ano para saber o seu número de dias:");
    scanf("%d %d", &mes, &ano);
    dias(mes,ano);
    return 0;
}
