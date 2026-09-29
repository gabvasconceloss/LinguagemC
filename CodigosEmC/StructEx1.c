#include<stdio.h>

typedef struct Aluno{
	char nome[20];
	int idade;
}Aluno;

main(){
	struct Aluno vet[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("\nInsira o nome do aluno : ");
		scanf("%s", &vet[i].nome);
		printf("\nInsira a idade do aluno : ");
		scanf("%d", &vet[i].idade);
	}
	
	for(i = 0; i < 5; i++){
		printf("\n-----------------------------------");
		printf("\nAluno : %s", vet[i].nome);
		printf("\nIdade: %d", vet[i].idade);
		printf("\n-----------------------------------");
	}
	
}
