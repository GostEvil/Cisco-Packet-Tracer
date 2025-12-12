#include<stdio.h>

	void ler(float* pa, float *pb) {
		printf("Insira dois numeros: ");
		scanf("%f%f", pa, pb);
	}
	void imprimir(float *pa, float* pb, float a, float b) {
		printf("-a=%f\n-b=%f\n-pa=%p\n-pb=%p\n-*a=%f\n-*b=%f\n\n", a, b, pa, pb, *pa, *pb);
	}
	void trocaf(float *pa,float *pb) {
		float temp;
		temp = *pa;
		*pa = *pb;
		*pb = temp;
	}
	void trocap(float **ppa, float **ppb) {
	
		float *tempp = *ppa;
		*ppa = *ppb;
		*ppb = tempp;
	}
	int main() {
		float a, b, * pa = &a, * pb = &b;
		ler(pa, pb);
		imprimir(pa, pb, a, b);
		trocaf(pa, pb);
		imprimir(pa, pb, a, b);
		trocap(&pa, &pb);
		imprimir(pa, pb, a, b);
	}
/* Exercicio 5 ficha 8
#include<stdio.h>
#include<string.h>
#define TMAX 50
void separa_min_mai(char *str, char *min, char *mai) {
	char* pstr = str;
	char* pmin = min;
	char* pmai = mai;
	for (pstr = str; *pstr != '\0'; pstr++) {
		if (*pstr >= 'a' && *pstr <= 'z'){
			*(pmin++) = *pstr;
        }
		if (*pstr >= 'A' && *pstr <= 'Z') {
			*(pmai++) = *pstr;
		}
	}
	*pmin = '\0';
	*pmai = '\0';
}
int main() {
	char str[TMAX], min[TMAX], mai[TMAX];
	printf("Digite uma frase(max:%d char):", TMAX);
	gets(str);
	separa_min_mai(str, min, mai);
	printf("-maiusculas:%s\n", mai);
	printf("-minusculas:%s\n", min);
}
*/
/* Exercicio 4 ficha 8 
#include<stdio.h>
#include<string.h>
#define TAM 80
int contachar(char *frase,char letra) {
	int contar = 0;
	char* p;
	for (p = frase; *p != '\0'; p++) {
		if (*p == letra) {
			contar++;
		}
	}
	return contar;
}
void printf_inverso(char *frase) {
	char *pini=frase;
	char* pfim = pini + strlen(frase)-1;
	while (pfim >= pini) {
		putchar(*pfim);
		pfim--;
	}
	putchar('\n');
}
int main() {
	char str[TAM], ch;
	printf("Digite uma frase:");
	gets(str);
	printf("Digite um caracter:");
	scanf("%c", &ch);
	printf("<%c> encontrado <%d> vezes\n", ch, contachar(str, ch));
	printf_inverso(str);
}
*/