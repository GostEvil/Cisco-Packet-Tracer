#include<stdio.h>

int main(int argc,char *argv[]) {
	FILE* fp;
	int i;
	if (argc != 2) {
		printf("Erro tem que dizer o nome do ficheiro\n");
		return -1;
	}
	if ((fp = fopen(argv[1],"rb")) == NULL) {
		printf("Erro no ficheiro");
		return -1;
	}
	fseek(fp, 0, SEEK_END);
	printf("Bytes:%ld", ftell(fp));
	fclose(fp);
}