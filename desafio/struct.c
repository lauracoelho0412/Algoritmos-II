#include <stdio.h>

struct Aluno {
    int idade;
    int altura;
    char * nome;
};

void listarTurma(struct Aluno turma[], int tamanho){
    for(int i=0; i < tamanho; i++){
        printf("%s\n", turma[i].nome);
    }
}

int maiorRecursivo(struct Aluno turma[], int tamanho){
    if(tamanho == 1){
        return 0;
    }
    int idx = maiorRecursivo(turma, tamanho-1);
     if (turma[tamanho - 1].altura > turma[idx].altura) {
        return tamanho - 1;
    } else {
        return idx;
    }
}

int maioresDoQue(struct Aluno turma[], int tamanho, int idade){
    int maior = 0;
    for(int i=0; i<tamanho; i++){
        if(turma[i].idade>=20){
            maior++;
        }
    }
    return maior;
}
int main(void) {
    int N = 10;
    struct Aluno turma[10] = {
        {13, 165, "Tanjiro"},
        {12, 153, "Nezuko"},
        {16, 164, "Zenitsu"},
        {15, 164, "Inosuke"},
        {20, 177, "Kanao"},
        {21, 176, "Shinobu"},
        {23, 190, "Giyu"},
        {20, 169, "Mitsuri"},
        {27, 195, "Rengoku"},
        {14, 170, "Genya"}
    };
    
    printf("Antes de mais nada, vamos listar a turma toda.\n");
    listarTurma(turma, N);
    printf("\n\n");
    
    printf("Quem é o aluno mais alto da turma?\n");
    int iDoMaisAlto = maiorRecursivo(turma, N);
    printf("É o %s, com %dcm\n\n", turma[iDoMaisAlto].nome, turma[iDoMaisAlto].altura);
    
    printf("Quantos alunos tem mais do que 20 anos?\n");
    int quantidadeDeAlunos = maioresDoQue(turma, N, 20);
    printf("Temos %d aluno(s) maiores que 20 anos\n", quantidadeDeAlunos);
    
    return 0;
}
