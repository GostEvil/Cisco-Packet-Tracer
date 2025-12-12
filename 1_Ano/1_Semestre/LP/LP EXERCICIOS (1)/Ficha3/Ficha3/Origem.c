#include<stdio.h>
float abono(char c) {
	switch (c)
	{
	case'1':printf("O abono mensal e 50"); break;
	case'2':printf("O abono mensal e 90.5"); break;
	case'3':printf("O abono mensal e 107.1"); break;
	default:printf("O abono mensal e %d",); break;
	}
}

int main() {
	char dep;
	printf("Insira o numero de dependentes:");
	scanf("%d", dep);
}
/* Exercicio 9 Ficha 3
#include<stdio.h>
void sexo(char c,int peso) {
	switch (c)
	{
	case'M':
	case'm':verificarpesoM(peso); break;
	case'f':
	case'F':verificarpesof(peso); break;
	default:printf("Sexo Invalido"); break;
	}
}
float verificarpesoM(int peso) {
	if (peso <= 50) {
		printf("O teu estado e muito magro");
	}
	else if (peso <= 60) {
		printf("O teu estado e magro");
	}
	else if (peso <= 80) {
		printf("O teu estado e saudavel");
	}
	else if (peso <= 90) {
		printf("O teu estado e gordo");
	}
	else if (peso > 90) {
		printf("O teu estado muito gordo");
	}
}
float verificarpesof(int peso) {
	if (peso <= 40) {
		printf("O teu estado e muito magro");
	}
	else if (peso <= 50) {
		printf("O teu estado e magro");
	}
	else if (peso <= 65) {
		printf("O teu estado e saudavel");
	}
	else if (peso <= 80) {
		printf("O teu estado e gordo");
	}
	else if (peso > 80) {
		printf("O teu estado muito gordo");
	}
}
int main() {
	char ch;
	int peso;
	printf("Qual o seu sexo(m/f)?");
	scanf("%c", &ch);
	printf("Qual o seu peso?");
	scanf("%d", &peso);
	sexo(ch, peso);
}
*/
/* Exercicio 8 ficha 3
#include<stdio.h>
float nota() {
	float tp, ee, ac, nf;
	printf("Insira as notas:\n");
	printf("\nTrabalho pratico:");
	scanf("%f", &tp);
	printf("Exame escrito:");
	scanf("%f", &ee);
	printf("Avaliaçao continua:");
	scanf("%f", &ac);
	nf = ((0.3 * tp) + (0.5 * ee) + (0.2 * ac));
	return nf;
}
void verificar(float nfinal) {
	if (nfinal < 9.5) {
		printf("Reprovado com nota %.2f", nfinal);
	}
	else {
		printf("Aprovado com nota %.2f", nfinal);
	}
}
int main() {
	float notas;
	notas = nota();
	verificar(notas);
}
*/
/*  Exercicio 7 ficha 3
#include<stdio.h>
char inserir() {
	char ch;
	printf("Inserir a sigla do seu clube [S,P,B,V]:");
	scanf("%c", &ch);
	return ch;
}
void clube(char c) {
	switch (c)
	{
	case'S':printf("-Sporting"); break;
	case'P':printf("-Porto"); break;
	case'B':printf("-Benfica"); break;
	case'V':printf("-Vilaverdense"); break;
	default:printf("- Clube sem motivos de interesse!Exeto o Braga ele e bom demais para estar aqui!"); break;
	}
}
int main() {
	char ch;
	ch = inserir();
	clube(ch);
}
*/
/* Exercicio 6 ficha 3
#include<stdio.h> 
float inserirtemp() {
	float temp;
	printf("Inserir temperatura:");
	scanf("%f", &temp);
	return temp;
}
void verificartemp(float temperatura) {
	if (temperatura <= 10) {
		printf("O tempo esta muito frio");
	}
	else if (temperatura <= 20) {
		printf("O tempo esta frio");
	}
	else if (temperatura <= 25) {
		printf("O tempo esta ameno");
	}
	else if (temperatura <= 30) {
		printf("O tempo esta quente");
	}
	else if (temperatura > 30) {
		printf("O tempo esta muito quente");
	}
}
int main() {
	int temp;
	temp = inserirtemp();
	verificartemp(temp);
}
*/
/*Ficha 3 Exercicio 5
#include<stdio.h>
float nota(float ficha1, float ficha2, float ficha3, float exame) {
	float notas;
	notas = ((0.2 * ficha1) + (0.2 * ficha2) + (0.2 * ficha3) + (0.4 * exame));
	printf("Nota:%f", notas);
}
int main() {
	float ficha1, ficha2, ficha3, exame,notas;
	printf("Inserir a nota da ficha 1:");
	scanf("%f", &ficha1);
	printf("Inserir a nota da ficha 2:");
	scanf("%f", &ficha2);
	printf("Inserir a nota da ficha 3:");
	scanf("%f", &ficha3);
	printf("Inserir a nota do exame:");
	scanf("%f", &exame);
	nota(ficha1, ficha2, ficha3, exame);

}
*/

/*
#include<stdio.h>
char inserir() {
	char ch;
	printf("Inserir a sigla do estado civil:");
	scanf("%c", &ch);
	return ch;
}
void verificar(char ch) {
	switch(ch)
	{
	case 's':
	case 'S':printf("O seu estado civil e solteiro."); break;
	case 'c':
	case 'C':printf("O seu estado civil e Casado."); break;
	case 'v':
	case 'V':printf("O seu estado civil e Viuvo."); break;
	case 'd':
	case 'D':printf("O seu estado civil e Divorciado."); break;
	default:printf("O seu estado civil desconhecido"); break;
	}
}
int main() {
	int c;
	c = inserir();
	verificar(c);
}
*/
/* 
#include<stdio.h>

float inserirnota() {
	float num;
	printf("Inserir nota:");
	scanf("%f", &num);
	return num;
}
void verificarnum(float num) {
	if (num > 0) {
		printf("O numero %f e positivo.", num);
	}
	else if(num<0) {
		printf("O numero %f e negativo.", num);
	}
	else {
		printf("O numero e %f", num);
	}
}
int main() {
	int num;
	num = inserirnota();
	verificarnum(num);
}
*/
/*Exercicio 6 ficha 1
#include<stdio.h>

float inserirnota() {
	float nota;
	printf("Inserir nota:");
	scanf("%f", &nota);
	return nota;
}
void verificarnota(float nota) {
	if (nota >= 0 && nota <= 20) {
		if (nota >= 10 && nota <= 20) {
			printf("O aluno esta aprovado com nota %f", nota);
		}
		else {
			printf("O aluno esta reprovado com nota %f\n", nota);
			if (nota >= 6.5 && nota <= 9.5) {
				printf("O aluno tem que fazer uma prova oral");
			}
		}
	}
	else {
			printf("Nota invalida");
		}

}

int main() {
	float nota;
	nota=inserirnota();
	verificarnota(nota);
}
*/