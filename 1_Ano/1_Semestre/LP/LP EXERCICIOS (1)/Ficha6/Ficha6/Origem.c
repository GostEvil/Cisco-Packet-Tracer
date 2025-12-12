
#include<stdio.h>
#define TMAX 100

int lernotas(float n[]) {
	int i = 0;
	while (1 < TMAX) {
		printf("%d:", i + 1);
		scanf("%f", &n[i]);
		if (n[i] < 0)
			break;
			i++;
		
	}
	return i;
}
int mediaNotas(float n[],int tam) {
	int i;
	float soma=0;
	for (i = 0; i < tam; i++) {
		soma += n[i];
	}
	return soma / tam;
}
void mostraNotasAcimaMedia(float n[], int tam, float media) {
	int i;
	printf("-Notas acima da media (%.2f):\n", media);
	for (i = 0; i < tam; i++) {
		if (n[i] > media) {
			printf("-%0.2f\n", n[i]);
		}
	}
}
int main() {
	float notas[TMAX];
	int quantasnotas;
	float mediaN;

	quantasnotas = lernotas(notas);
	mediaN = mediaNotas(notas, quantasnotas);
	mostraNotasAcimaMedia(notas, quantasnotas, mediaN);
}
/*
#include<stdio.h>
#define Meses 12

void lertemperaturas(float t[]) {
	int m;
	printf("Digite as temperaturas ao longo do ano:\n");
	for (m = 0; m < Meses; m++) {
		printf("# Meses %0.2d:", m + 1);
		scanf("%f", &t[m]);
	}
}
void mostrartemp(float t[]) {
	int m;
	printf("Temperaturas medias inseridas: \n");
	printf("Mes          Temperatura\n");
	printf("--------------------------\n");
	for (m = 0; m < Meses; m++) {
		printf("%0.2d            %4.1f\n", m + 1, t[m]);
	}
	printf("--------------------------\n");
}
int procurartemp(float t[], float procura) {
	int m;
	for (m = 0; m < Meses; m++) {
		if (t[m] == procura)
			return m;
	}
	return -1;
}
float media(float t[]) {
	int i = Meses;
	float soma = 0;
	while (i-- > 0) {
		soma += t[i];
		return soma / Meses;
	}
}
float minimo(float t[]) {
	int i = 0;
	float min = t[i];
	for (i = 1; i < Meses; i++) {
		if (t[i] < min) {
			min = t[i];
		}
	}
	return min;
}
float maximo(float t[]) {
	int i = 0;
	float max = t[i];
	for (i = 1; i < Meses; i++) {
		if (t[i] > max) {
			max = t[i];
		}
	}
	return max;
}
int main() {
	float temperaturas[Meses];
	float procura;
	int indice;
	lertemperaturas(temperaturas);
	mostrartemp(temperaturas);

	printf("# Temperatura a procurar?");
	scanf("%f", &procura);

	indice = procurartemp(temperaturas, procura);
	if (indice == -1) {
		printf("Temperatura nao encontrada!\n");
	}
	else {
		printf("A temperatura que procura foi inserida no mes:%d\n", indice);
	}
	printf("-Temperatura media; %4.1f\n", media(temperaturas));
	printf("-Temperatura minima; %4.1f\n", minimo(temperaturas));
	printf("-Temperatura maxima; %4.1f\n", maximo(temperaturas));
	printf("-Amplitude: %4.1f\n",maximo(temperaturas) - minimo(temperaturas));
}

/*Ficha 6 exercio 6
#include<stdio.h>
#define DIM 20
#define TRUE 1
#define FALSE 0
int ler(int v[]) {
	int i = 0, val;
	do {
		scanf("%d", &val);
		if (val !=0) {
			v[i++] = val;
		}
	} while (val!=0 && i < DIM);
	return i;
}
int vercrescente(int v[],int tam){
	int i=0;
	for (i = 1; i < tam; i++) {
		if (v[i] <= v[i - 1]) {
			return FALSE;
		}
		return TRUE;
	}
}
int semrepetiçoes(int n[],int tam) {
	int i, j;
	for (i = 0; i < tam; i++) {
		for (j = 0; j < tam; j++) {
			if (n[i] == n[j] && i != j) {
				return TRUE;
			}

		}
	}
	return FALSE;
}
int alterna(int n[],int tam) {
	int i;
	for (i = 1; i < tam; i++) {
		if (((float)n[i] / n[i - 1]) >= 0) {
			return FALSE;
		}
		return TRUE;
	}
}
int main() {
	int vetor[DIM],tam;
	printf("Digite numeros inteiros[0 para sair]\n");
	tam = ler(vetor);
	printf("Foram introduzidos %d numeros inteiros\n",tam);
	printf("#Ordem crescente:\n");
	if (vercrescente(vetor, tam)) {
		printf("Verdadeiro\n");
	}
	else {
		printf("Falso\n");
	}
	printf("#Alterna positivo/negativo:\n");
	if (alterna(vetor, tam)) {
		printf("Verdadeiro\n");
	}
	else {
		printf("Falso\n");
	}
	printf("#Repetiçoes:\n");
	if (semrepetiçoes(vetor, tam)) {
		printf("Verdadeiro\n");
	}
	else {
		printf("Falso\n");
	}
}
*/
/*exercicio 3 ficha 6
#include<stdio.h>
int bisexto(int ano) {
	return (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
}
int ultimo(int mes, int ano) {
	switch (mes)
	{
	case 2: return bisexto(ano) ? 29 : 28;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	default:
		return 31;
	}
}
int valida(int data[]) {
	return data[0] >= 1 && data[0] <= ultimo(data[0],data[1]) && data[1] >= 1 && data[1] <= 12 && data[2] >= 1;
}
int dia_ano(int data[]) {
	int ndias = 0, m;
	for (m = 1; m < data[1]; m++) {
		ndias += ultimo(m, data[2]);
	}
	ndias += data[0];
	return ndias;
}
int dias_entre(int data1[], int data2[]) {
	int ndias = 0, a;
	for (a = data1[2]; a < data2[2]; a++) {
		ndias += bisexto(a) ? 366 : 365;
	}
	ndias -= dia_ano(data1);
	ndias += dia_ano(data2);
	return ndias;
}
int idade(int dtnasc[], int dtatual[]) {

	int id;
	if (!valida(dtnasc) || comparaDatas(dtnasc, dtatual) > 0)
	{
		id = -1;
	}
	else if (dia_ano(dtatual) >= dia_ano(dtnasc))
	{
		id =dtatual[2] - dtnasc[2];
	}
	else
	{
		id = dtatual[2] - dtnasc[2] - 1;
	}
	return id;
}
int comparaDatas(int data1[], int data2[]) {

	if (data1[2] != data2[2])
	{
		return data1[2] - data2[2];
	}
	else
	{
		if (data1[1] != data2[~1])
		{
			return data1[1] - data2[1];
		}
		else
		{
			return data1[0] - data2[0];
		}
	}
}
int main() {

	int nasc[3], atual[3];
	printf("Data de nascimento [dd/mm/aaaa]: ");
	scanf_s("%d%d%d", &nasc[0], &nasc[1], &nasc[2]);
	if (valida(nasc))
	{
		printf("Data de hoje [dd/mm/aaaa]:");
		scanf_s("%d%d%d", &atual[0], &atual[1], &atual[2]);
		if (valida(atual) && comparaDatas(atual, nasc) >= 0)
		{
			printf("%d Dias já vividos\n", dias_entre(nasc, atual));
			printf(" Tem atualmente %d anos de idade.\n", idade(nasc, atual));

		}
		else
		{
			printf("Data de hoje invalida, ou data de nascimento, posterior a hoje!");
		}
	}
	else
	{
		printf("Data de nascimento invalida!\n");
	}
}
*/