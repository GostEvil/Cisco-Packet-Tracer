#include<stdio.h>

char tipo_combustivel() {
	char ch;
	printf("Combustivel [d,g,s]:");
	scanf("%c", &ch);
	if (ch != 'd' && ch != 'g' && ch != 's') {
		printf("invalido\n");
		getchar();
	}
	else {
		return ch;
	}
}
float valor_consumo(char tipo, float consumo, float distancia) {
	if (tipo == 'd') {
		printf("\nConsumo:%.2f", ((consumo / 100) * 1.927 * distancia));
	}
	if (tipo == 'g') {
		printf("\nConsumo:%.2f", ((consumo / 100) * 1.900 * distancia));
	}
}
int main() {
	char tipo;
	do {
		float consumo, distancia;
		tipo = tipo_combustivel();
		if (tipo == 'd' || tipo == 'g') {
			printf("Distancia:");
			scanf("%f", &distancia);
			printf("Consumo:");
			scanf("%f", &consumo);
			valor_consumo(tipo, consumo, distancia);
		}
	} while (tipo != 's');
	printf("Adeus!");
}
