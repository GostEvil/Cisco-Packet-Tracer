#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
int valida(int dia, int mes, int ano) {
	return dia >= 1 && dia <= ultimo(mes, ano) && mes >= 1 && mes <= 12 && ano >= 1;
}
int dia_ano(int dia, int mes, int ano) {
	int ndias = 0, m;
	for (m = 1; m < mes; m++) {
		ndias += ultimo(m,ano);
	}
	ndias += dia;
	return ndias;
}
int dias_entre(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
	int ndias = 0, a;
	for (a = ano1; a < ano2; a++){
		ndias += bisexto(a) ? 366 : 365;
	}
	ndias -= dia_ano(dia1, mes1, ano1);
	ndias += dia_ano(dia2, mes2, ano2);
	return ndias;
}

int main() {
	int dian, mesn, anon, diaa, mesa, anoa;
	printf("Data de nascimento:[d/m/a]:");
	scanf("%d%d%d", &dian, &mesn, &anon);
	if (valida(dian, mesn, anon)) {
		printf("Dia de hoje[d/m/a]:");
		scanf("%d%d%d", &diaa, &mesa, &anoa);
		if (valida(diaa, mesa, anoa)) {
			printf("%d dias ja vividos\n", dias_entre(dian, mesn, anon, diaa, mesa, anoa));
		}
		else {
			printf("Data invalida");
		}
	}
	else {
		printf("Data invalida");
	}
		
}
/*Ecercicio 8 ficha 5
#include<stdio.h>
#include<math.h>
float potencia(float base, int n) {
	float pot = 1;
	int exp;
	for (exp = 1; exp <= abs(n); exp++) {
		pot *= base;
	}
	return n > 0 ? pot : 1 / pot;
}
float val(float v, float t, int n) {
	int i;
	float vl = 0;
	for (i = 1; i <= n; i++) {
		vl += v / potencia(1 + t, i);
	}
	return vl;
}

int main() {
	float v, t;
	int n;
	printf("Digite o capital:");
	scanf("%f", &v);
	printf("Digite a taxa:");
	scanf("%f", &t);
	printf("Digite o numero de anos:");
	scanf("%d", &n);

	printf("Valor atual liquido(Val):%.3f\n", val(v, t, n));
}

*/

/*Ecercicio 7 ficha 5
#include<stdio.h>
double fatorial(int n) {
	double resultados = 1;
	int i;
	for (i = 1; i <= n; i++) {
		resultados *= i;
	}
	return resultados;
}
double combinacoes(int n, int p) {
	return fatorial(n) / (fatorial(n - p) * fatorial(p));
}
int main() {
	//printf("Fatorial %f", fatorial(5));
	printf("Totoloto:%0.lf\n", combinacoes(49, 6));
	printf("Euromilhoes: %0.lf\n", combinacoes(50, 5) * combinacoes(11, 2));
}
*/