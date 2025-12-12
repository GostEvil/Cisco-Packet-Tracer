#include<stdio.h>
#include<stdlib.h>

#define INCREMENTO 5
typedef struct {
	int num_socio;
	char nome[30];
	float quota;
}Tjogador;
int main() {
	Tjogador* jogadores = malloc(INCREMENTO * sizeof(Tjogador));
	int contador = 0;
	int novo_tamanho = 0;
	Tjogador *ptr;

	printf("Insira jogadores:\n");
	while (1) {
		if (contador != 0 && contador % INCREMENTO == 0) {
			novo_tamanho = contador + INCREMENTO;
			jogadores = realloc(jogadores, novo_tamanho * sizeof(Tjogador));
			if (jogadores == NULL) {
				printf("\t ERRO ao refimensionar o vetor!\n");
				return -1;
			}
			else {
				printf("\t + Aumeentado o vetor para %d\n", novo_tamanho);
			}
		}
		ptr=jogadores + contador;
		printf("----[Jogador %d]---------------\n", contador + 1);
		printf(">numero de socio[x para terminar]:");
		if (scanf("%d", &ptr->num_socio) != 1) {
			return 0;
		}
		getchar();
		printf(">nome:");
		gets(ptr->nome);
		printf(">quota:");
		scanf("%f", &ptr->quota);
		contador++;
	}
	ptr = jogadores;
	printf("===[Lista de jogadores]=========\n");
	while (ptr < jogadores + contador) {
		printf("[%d] Nome:%s (%.2f)\n", ptr->num_socio, ptr->nome, ptr->quota);
		ptr++;
	}
}
/*
#include<stdio.h>
#include<stdlib.h>

#define INCREMENTO 5

double media(double* valores, int quantidade) {
	double media = 0;
	double* ptr = valores;

	while (ptr < valores + quantidade) {
		media += *ptr++ / quantidade;
	}
	return media;
}
int main() {
	double* valores = malloc(INCREMENTO * sizeof(double));
	int contador = 0;
	int novo_tamanho = 0;
	
	printf("Digite os valores(x para terminar:\n");
	while (1) {
		if (contador != 0 && contador % INCREMENTO == 0) {
			novo_tamanho = contador + INCREMENTO;
			valores = realloc(valores, novo_tamanho * sizeof(double));
			if (valores == NULL) {
				printf("\t ERRO ao refimensionar o vetor!\n");
				return -1;
			}
			else {
				printf("\t + Aumeentado o vetor para %d\n", novo_tamanho);
			}
		}
		printf("#valor %d:", contador + 1);
		if(scanf("%lf", valores + contador)!=1)
		break;
		contador++;
	}
	printf("Media=%.2lf\n", media(valores, contador));
}
*/