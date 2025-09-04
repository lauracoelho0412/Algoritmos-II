#include <stdio.h>

int buscar(int vetor[], int num, int left, int right){
    int mid = (left+right)/2;
    if(vetor[mid] == num){
        return mid;
    }
    if(vetor[mid] < num){
        left = mid + 1;
        return buscar(vetor, num, left, right);
    }
    else{
        right = mid - 1;
        return buscar(vetor, num, left, right);
    }
}

int main()
{
   int v[] = {1,2,4,8,16,32,64,128};
   int resp = buscar(v, 64,0,7);
   printf("Está no indice %d", resp);
   

    return 0;
}