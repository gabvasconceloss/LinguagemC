#include<stdio.h>

typedef struct Aluno{
        char nome[10];
        float media;
}Aluno;

main(){

    struct Aluno vet[5];
    int i=0;

    for(i=0;i<5;i++){
        printf("\nDigite o nome do aluno: ");
        scanf("%s", &vet[i].nome);
        printf("\nDigite a media do aluno: ");
        scanf("%f", &vet[i].media);
        printf("\n------------------------ ");
    }
    printf("\n####A lista de Alunos: #####");
    for(i=0;i<5;i++){
        printf("\nO Aluno: %s ", vet[i].nome);
        printf("\nA Media do Aluno: %.2f ", vet[i].media);

        printf("\n------------------------ ");
    }
}
