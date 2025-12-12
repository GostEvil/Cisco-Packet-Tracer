#include<stdio.h>
#define NDISCIPLINAS 3
#define ALUNOS 2

char menu() {
	char op;
	printf("-----------------Menu---------------\n");
	printf("a)Prencher pauta\n");
	printf("b)Taxa de aprovaçao e de reprovaçao\n");
	printf("c)Mostrar notas\n");
	printf("Opçao:");
	scanf(" %c", &op);
	return op;
}
void preencher(float notas[][ALUNOS]) {
	int a, d;
	for (d = 0; d < NDISCIPLINAS; d++) {
		printf("Disciplina: %d\n", d + 1);
		for (a = 0; a < ALUNOS; a++) {
			printf("\t\tAluno:%d\n", a + 1);
			printf("\t\tNota:");
			scanf("%f", &notas[d][a]);
			printf("\n");
		}//fim do ciclo alunos(colunas)
	}//fim do ciclo disciplinas(linhas)
}
int Taxa(float n[][ALUNOS], float npos[],float nneg[]) {
	int i, j;
	float txpos, txneg;
	int neg, pos;
	for (i = 0; i < NDISCIPLINAS; i++) {
		txpos = 0;
		txneg = 0;
		neg = 0;
		pos = 0;
		for (j = 0; j < ALUNOS; j++) {
			if (n[i][j] >= 0 && n[i][j] <= 9.5) {
				neg++;
			}
			else if (n[i][j] >= 9.5 && n[i][j] <= 20) {
				pos++;
			}
		}
		txneg = (float)neg * 100 / ALUNOS;
		txpos = (float)pos * 100 / ALUNOS;
		npos[i] = txpos;
		nneg[i] = txneg;
	}
}
int Taxadisciplinas(float notas[][ALUNOS], float Notaspos[], float Notasneg[]) {
	int i;
	Taxa(notas, Notaspos, Notasneg);
	for (i = 0; i < NDISCIPLINAS; i++) {
		printf("Disciplina: %d\n", i+1);
		printf("\t\tTaxa de aprovaçao: %d\n",Notaspos[i]);
		printf("\t\tTaxa de reprovaçao: %d\n",Notasneg[i]);

	}
}
void mostrar(float notas[][ALUNOS]) {
	int a, d;
	for (d = 0; d < NDISCIPLINAS; d++) {
		printf("Disciplina: %d\n", d + 1);
		for (a = 0; a < ALUNOS; a++) {
			printf("\t\tAluno:%d\n", a + 1);
			printf("\t\tNota:%f",notas[d][a]);
			printf("\n");
		}//fim do ciclo alunos(colunas)
	}//fim do ciclo disciplinas(linhas)
}
int main() {
	float notas[NDISCIPLINAS][ALUNOS];
	float notaspos[NDISCIPLINAS];
	float notasneg[NDISCIPLINAS];
	char ch;
	do {
		ch = menu();
		switch (ch)
		{
		case 'a':preencher(notas); break;
		case 'b':Taxadisciplinas(notas,notaspos,notasneg); break;
		case 'c':mostrar(notas); break;
		}
	} while (ch != 's');
}