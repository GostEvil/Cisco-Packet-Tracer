#include<stdio.h>
#define TMAX 1000
#define PATH "numeros.bin"
#define TRUE 1
#define FALSE 0
void bubble_sort(int v[], long n) {
	long i, j, houvetroca = 1;
	int temp;
	for (i = n - 1; i >= 1 && houvetroca; i--) {
		houvetroca = 0;
		for (j = 1; j <= i; j++)
			if (v[j - 1] > v[j]) {
				temp = v[j - 1];
				v[j - 1] = v[j];
				v[j] = temp;
				houvetroca = 1;
			}
	}
}
void guarda_numeros(int *v[],long n,int append) {
	FILE *fp;

	if (append) {
		fp = fopen(PATH, "ab");
	}
	else {
		fp = fopen(PATH, "wb");
	}
	if (fp == NULL) {
		printf("Erro ao abrir '%s' para escrita.\n",PATH);
		return;
	}
	fwrite(v, sizeof(int), n, fp);
	fclose(fp);
}
long ler_numeros(int* numeros) {
	long n = 0;
	int* ptr = numeros;
	FILE* fp=fopen(PATH,"rb");
	if (fp == NULL) {
		printf("Erro ao abrir '%s' para leitura", PATH);
		return -1;
	}
	while (!feof(fp) && n < TMAX) {
		fread(ptr++, sizeof(int), 1, fp);
		n++;
	}
	fclose(fp);
	return n - 1;
}
int menu() {
	int op;
	printf("0) Sair\n");
	printf("1) Insira uma sequencia de numeros\n");
	printf("2) Mostrar inteiros existentes no ficheiro\n");
	printf("3) Ordenar inteiros ( bubble sort ) e guardar\n");
	printf("opçao:");
	scanf("%d", &op);
	return op;
}
void inserir_inteiros() {
	int i,v[TMAX];
	long n;
	int* ptr = v;
	printf("Quantos numeros quer inserir:");
	scanf("%ld",&n);
	if (n > TMAX) n = TMAX;
	for (i = 0; i < n; i++) {
		printf("%ld:", i + 1);
		scanf("%d", ptr++);
	}
	guarda_numeros(v, n,TRUE);
}
void mostrar_inteiros() {
	int numeros[TMAX];
	long tam = ler_numeros(numeros);
	long i;
	for (i = 1; i < tam; i++) {
		printf("-Numero [%ld]=%d\n", i + 1, numeros[i]);
	}
}
int ordenar_inteiros() {
	int numeros[TMAX];
	long total = ler_numeros(numeros);
	bubble_sort(numeros, total);
	guarda_numeros(numeros, total, FALSE);
}
int main() {
	int opcao,v[TMAX];
	while (1) {
		opcao = menu();
		switch (opcao)
		{
		case 0 :return 0;
		case 1 :inserir_inteiros(); break;
		case 2 :mostrar_inteiros(); break;
		case 3 :ordenar_inteiros(); break;
		default:printf("#opçao invalida!!:%d\n",opcao); break;
		}
	}
}