/*Exercicio 5 ficha 9
#include<stdio.h>

int main() {
	FILE* fp;
	int cont;
	if ((fp = fopen("contador.dat", "rb")) == NULL) {
		//nao existe
		cont = 1;
	}
	else {
		fread(&cont,sizeof(int),1,fp);
		cont++;
		fclose(fp);
	}
	printf("executado %d vezes,\n", cont);
	fp=fopen("contador.dat", "wb");
	fwrite(&cont, sizeof(int), 1, fp);
	fclose(fp);
}
*/
/*
#include<stdio.h>
int main(int argc,char *argv[]) {
	FILE* fp;
	int i;
	char ch;

	if (argc == 1) {
		printf("Por favor,insira pelo menos o nome de um ficheiro.\n");
		exit(1);
	}
	for (i = 1; i < argc; i++) {
		if ((fp = fopen(argv[1], "r")) == NULL){
		printf("Erro ao abrir o ficheiro %s\n", argv[i]);
	    }
		else {
			printf("\n\n<linhas do ficheiro %s>\n",argv[i]);
			while ((ch = fgetc(fp)) != EOF)
				putchar(ch);
			fclose(fp);
		}
	}

}
*/
/*
#include<stdio.h>
#define NMAX 80
int main() {
	char linha[NMAX];
	FILE* fp;
	if ((fp = fopen("linhas.txt", "w")) == NULL) {
		printf("O ficheiro nao foi aberto\n");
	}
	else {
		do {
			printf("> ");
			fgets(linha, NMAX, stdin);// stdin e o teclado standart input
			fputs(linha, fp);
		} while (linha[0] != '\n');
		fclose(fp);
	}
}
*/