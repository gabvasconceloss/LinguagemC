#include<stdio.h>
#include<stdbool.h>

typedef struct Alunos {
	char nome[30];
	float nota1, nota2, media;
	bool aprovado;
} Alunos;

main() {
	struct Alunos vet[5];
	int i;

	for(i = 0; i < 3; i++) {
		printf("\nInsira o nome do aluno : ");
		scanf("%s", &vet[i].nome);
		printf("\nInsira a primeira nota : ");
		scanf("%f", &vet[i].nota1);
		printf("\nInsira a segunda nota : ");
		scanf("%f", &vet[i].nota2);

		vet[i].media = (vet[i].nota1 + vet[i].nota2)/2;

		if(vet[i].media>=7) {
			vet[i].aprovado = true;
		} else {
			vet[i].aprovado = false;
		}
	}

	for(i = 0; i < 3; i++) {
		printf("\n-------------------------");
		printf("\nNome do Aluno : %s", vet[i].nome);
		printf("\nNota 1 : %.2f", vet[i].nota1);
		printf("\nNota 2: %.2f", vet[i].nota2);
		printf("\nMedia : %.2f", vet[i].media);
		if(vet[i].aprovado) printf("\nAluno Aprovado!");
		printf("\n-------------------------");
	}

}
