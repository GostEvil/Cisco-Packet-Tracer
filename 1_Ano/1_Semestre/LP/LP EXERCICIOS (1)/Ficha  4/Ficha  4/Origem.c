/*
#include<stdio.h>
int is_upper(char c) {
	return c >= 'A' && c <= 'Z';
}
int is_lower(char c) {
	return c >= 'a' && c <= 'z';
}
int switch_case(char c) {
	if (is_upper(c))
		return c + 32;
	else
		return c - 32;
}
int read_char() {
	char c;
	do {
		printf("Degite uma letra:");
		scanf("%c", &c);
		if (!is_upper(c) && !is_lower(c) && c != '.')
			printf("Nao digitou uma letra.\n");
		getchar();
	}while (!is_upper(c) && !is_lower(c) && c != '.');
	return c;
}
int main() {
	char c;
	do {
		c = read_char();
		if (c != '.')
			printf("%c-> %c\n", c, switch_case(c));

	} while (c != '.');
	printf("Adeus!");
}
*/
/*
#include<stdio.h>
#include<math.h>

float potencia(int b, int n) {
	float pot = 1;
	int exp;
	for (exp = 1; exp <= abs(n); exp++)
		pot *= b;
	return n >0 ? pot:1/pot;
}

int main() {
	int base;
    int expoente;
	printf("Digite a base:");
	scanf("%d", &base);
	printf("Digite o expoente positivo:");
	scanf("%d", &expoente);
	printf(" Resultado de %d ^ %d = %f\n", base, expoente, potencia(base, expoente));

}
*/
/*
#include<stdio.h>
void imprimirestrelas(int est) {
	while (est-- > 0) {
		printf("*");
	}
	putchar("\n");
}
int main() {
	imprimirestrelas(20);
	printf("\nBem vindo!\n");
	imprimirestrelas(20);

}
*/
/*exercio 3 ficha5
#include<stdio.h>
float potencia(float b, int n) {
	int pot = 1;
	int exp;
	for (exp = 1; exp <= n; exp++)
		pot *= b;
	return pot;
}

int main() {
	int base;
	int expoente;
	printf("Digite a base:");
	scanf("%d", &base);
	printf("Digite o expoente positivo:");
	scanf("%d", &expoente);
	printf(" Resultado de %d ^ %d = %.3f\n", base, expoente, potencia(base, expoente));

}
*/
/*exercicio 6
#include<stdio.h>
int main() {
	int codigo;
	for (codigo = 32; codigo <= 137; codigo++) {
		printf("%c (%.2d)", codigo, codigo);
		if (codigo % 32 == 0) {
			printf("\n");
		}
	}

}
*/
/*Ficha 4 exrcicio 5
#include<stdio.h>
int main() {
	int num;
	int todosospares = 1, todospositivos = 1;
	do {
		printf("Digite um numero:");
		scanf("%d", &num);
		if (num != 0) {
			if (num % 2 != 0) {
				todosospares=0;
			}
			if (num < 0) {
				todospositivos = 0;
			}
		}
	} while (num != 0);
	printf("Todos os numeros sao positivos?\n");
	printf(todospositivos ? "Sim" : "Nao");
	printf("\n");
	printf("Todos os numeros sao Pares?\n");
	printf(todosospares ? "Sim" : "Nao");
}
*/