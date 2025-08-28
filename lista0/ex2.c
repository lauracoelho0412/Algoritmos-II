#include <stdio.h>

int main()
{
    int tabuada(int números){
        int tabela[números][números];
       for(int i=1; i<=números; i++){
           for(int j = 1; j<=9; j++){
               tabela[i][j] = i*j;
               printf("%d x %d = %d | ",i ,j ,tabela[i][j]);
           }
           printf("\n");
       }
    }
    int num;
    printf("Coloque até qual número da tabela você quer a tabuada:");
    scanf("%d", &num);
    tabuada(num);

    return 0;
}
