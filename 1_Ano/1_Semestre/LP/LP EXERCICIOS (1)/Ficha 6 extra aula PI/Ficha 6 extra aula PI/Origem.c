
#include<stdio.h>
#define DIM 100

int ler(int v[]) {
	int i=0,val;
	do {
		scanf("%d", &val);
		if(val > 0 && val< 50) {
			v[i++] = val;
		}
	} while (val >= 0 && i < DIM);
	return i;
}
int minimo(int v[], int n) {
	int i, imin=0;
	for (i = 0; i < n; i++) {
		if (v[i] < v[imin]) {
			imin = i;
		}
	}
	return imin;
}
int maximo(int v[], int n) {
	int i, imax = 0;
	for (i = 0; i < n; i++) {
		if (v[i] > v[imax]) {
			imax = i;
		}
	}
	return imax;
}
void mostrarAmplitude(int v[],int n) {
	printf("dif. entre o maximo e minimo=%d\n", v[maximo(v, n)] - v[minimo(v, n)]);
}
void mostrar(int v[], int dimensao) {
	int i;
	for (i = 0; i < dimensao; i++) {
		printf("%d ", v[i]);
	}
}
int main() {
	int vetor[DIM], nelem=0;
	int nmax, nmin;
	printf("Digite numeros inteiros[<0 para sair]");
	nelem = ler(vetor);
	nmin = minimo(vetor, nelem);
	nmax = maximo(vetor, nelem);
	mostrarAmplitude(vetor, nelem);
	mostrar(vetor, nelem);
	putchar('\n');
	if (nmin < nmax) {
		mostrar(&vetor[nmin], nmax - nmin + 1);
	}
	else {
		mostrar(&vetor[nmax], nmin - nmax + 1);
	}
}
