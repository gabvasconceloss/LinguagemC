#include<stdio.h>

typedef struct Produto {
	char nome[30];
	float preco;
	int quantidade;
}Produto;

main() {
	struct Produto vet[5];
	int i;
	for(i = 0; i < 5; i++) {
		printf("\nInsira o nome do produto : ");
		scanf("%s", &vet[i].nome);
		printf("\nInsira o valor do produto : ");
		scanf("%f", &vet[i].preco);
		printf("\nInsira a quantidade em estoque : ");
		scanf("%d", &vet[i].quantidade);
	}
	
	for(i = 0; i < 5; i++) {
		printf("\n-------------------------");
		printf("\nnome do produto : %s", vet[i].nome);
		printf("\nvalor do produto : %.2f", vet[i].preco);
		printf("\nquantidade em estoque : %d", vet[i].quantidade);
		printf("\nvalor total em estoque : %.2f", vet[i].preco * vet[i].quantidade);
		printf("\n-------------------------");
	}
	
}
