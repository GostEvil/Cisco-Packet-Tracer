#include<stdio.h>
#include<string.h>
#define MAX 100
typedef struct {
	int dia, mes, ano;
} TData;
typedef struct {
	char nome[50];
	TData data_nascimento;
} TAniversario;
TAniversario aniversario() {
	TAniversario idade;
	fseek(stdin, 1, SEEK_END);
	printf("Qual o seu primeiro nome?\n");
	gets(idade.nome);
	printf("Sua data de nascimento(DD//MM//AAAA)?\n");
	scanf("%d/%d/%d", &idade.data_nascimento.dia, &idade.data_nascimento.mes, &idade.data_nascimento.ano);
	return idade;
}
void mostrarnascimento(TAniversario mostra) {
	printf("%s nasceu no dia %d/%d/%d\n",mostra.nome,mostra.data_nascimento.dia,mostra.data_nascimento.mes,mostra.data_nascimento.ano);
}
int menu() {
	int op;
	printf("\n\n0)SAIR\n");
	printf("1)ADICIONAR-Adicionar um aniversariante\n");
	printf("2)PESQUISAR-Pesquisar um aniversariante\n");
	printf("3)LISTAR-Listar todos os aniversariante\n");
	printf("Opçao:");
	scanf("%d", &op);
	return op;
}
void pesquis(TAniversario* aniv, TAniversario* ultimo) {
	TAniversario* cur;
	char pesq[50];

	printf("Pesquisar:");
	fseek(stdin, 1, SEEK_END);
	gets(pesq);
	for (cur = aniv; cur < ultimo; cur++) {
		if (strstr(cur->nome, pesq) != NULL) {
			mostrarnascimento(*cur);
			return;
		}
	}
}
int main() {
	int op;
	int i;
	TAniversario aniversariantes[MAX];
	TAniversario* atual = aniversariantes;
	TAniversario* cur;
	while (1)
	{
		op = menu();
		switch (op)
		{
		case 0:return 0;
		case 1:
			fseek(stdin, 0, SEEK_END);
			for (i = 0; i < 5; i++) {
				*atual = aniversario();
				atual++;
			}
			break;
		case 2:
			pesquis(aniversariantes, atual);
			break;
		case 3:
			for (cur = aniversariantes; cur < atual; cur++)
				mostrarnascimento(*cur);
			break;
		default:printf("ERRO:Opçao invalida!!\n"); break;
		}
	}
}