#include <stdio.h>

int main()
{
    int transf(int valor){
        int dec = valor * 10;
        int mili = valor* 1000;
        int cent = valor * 100;
        return printf("O valor em milimetros, centimetros e decimetros é respectivamente: %d,%d,%d", mili, cent, dec);
    }
    int metros;
    printf("Coloque um valor em metros:");
    scanf("%d", &metros);
    transf(metros);

    return 0;
}
