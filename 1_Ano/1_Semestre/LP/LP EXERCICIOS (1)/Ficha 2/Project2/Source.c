#include<stdio.h>
int main() {
	int a, b;
	printf("Digite dois numeros:");
	scanf("%d %d", &a, &b);
}


/*
#include<stdio.h>
int main(){
	float a, b;
	char c; //soma = 43, divisao = 47, x = 42, subtra = 45;
	printf("Escolha a operaçao:\n+)Adiçao\n-)Subtraçao\n*)multiplicaçao\n/)divisao\n");
	c = getchar();
	if (c == 43) {
		printf("Operador:%c\n", c);
		printf("Digite dois numeros:");
		scanf("%f %f", &a, &b);
		printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	}
    if (c == 45) {
		printf("Operador:%c\n", c);
		printf("Digite dois numeros:");
		scanf("%f %f", &a, &b);
		printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    }
	if (c == 42) {
		printf("Operador:%c\n", c);
		printf("Digite dois numeros:");
		scanf("%f %f", &a, &b);
	    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	}
    if (c == 47) {
		printf("Operador:%c\n", c);
		printf("Digite dois numeros:");
		scanf("%f %f", &a, &b);
	    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
	}

			
		

}


*/

	/*Parte 1
	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
	*/	
		


/*#include <stdio.h >
int main() {
	int n;//numero inteiro
	float x;//numero com casas decimais
	char ch;//um caracter
	x = 100.554;//atribui um valor a x
	n = x; //dar o mesmo valo de x a n mas sem as casas decimais porque n e um numero inteiro
	ch = 'd';//dado o valor de d a variavel d(minusculo) que segundo a tabela de ascai e 100
	printf(" Valor de x = %f\n", x);//printf que mostra o valor de x ou seja 100.554
	printf(" Valor de n = %d\n", n);//printf que mostra o valor de n ou seja 100
	printf(" Valor de n ( char ) = %c\n", n);//printf com cast ou seja torna a variavel n num char ou seja vai aparecer a letra d pois a letra d correspode ao numero 100 na tabela de ascai
	printf(" Valor de ch = %c\n", ch);//prinf que mostra o valor da variavel ch em caracter ou seja d
	printf(" Valor de ch (int) = %d\n", ch);//prinf que mostra o valor da variavel ch em numero ou seja 100 segundo a tabela de ascai
}*/
/*#include<stdio.h>
int main() {
	char c;
	printf("Digite um caracter:");
	c = getchar();
	if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c>='0' && c<='9') {
		if(c >= 'a' && c <= 'z'|| c >= 'A' && c <= 'Z') {
			if (c >= 'a' && c <= 'z') {
				printf("A letra e minuscula:%c-->%c", c, c - ('a' - 'A'));
			}
			else {
				printf("A letra e maiscula:%c-->%c", c, c - ('A' - 'a'));
			}
		}
		else {
			printf("O caracter digitado foi um numero:%c",c);
		}

	}
	else {
		printf("O caracter digitado foi um nao alfanumerico : % c", c);
	}
}
*/
/*Exercicio 7 ficha 2
#include<stdio.h>
int main() {
	int a ,b ,c;
	printf("Digite 3 valores [a,b,c]:");
	scanf("%d %d %d", &a ,&b , &c);
	if (a == 0 || b == 0 || c == 0) {
		printf("Um dos  valores e zero");
	}
	else 
	{
		printf("ordenaçao\n");
		if (a <= b && a<=c) {//a menor
			if (b <= c) {
				printf("%d %d %d", a, b, c);
			}
			else {
				printf("%d %d %d", a, c, b);
			}
		}
		else{
			if (b <= a && b <= c) {
				if (a <= c){
					printf("%d %d %d", b, a, c);
			    }
				else {
					printf("%d %d %d", b, c, a);
				}
			}
			else
				if (a <= b) {
					printf("%d %d %d", c, a, b);
				}
				else {
					printf("%d %d %d", c ,b, a);
				}
		}
	}
}
*/
//Exercicio 6 ficha 2
/*
#include<stdio.h>
int main() {
	int a,t;
	printf("Acelaracao:");
	scanf("%d", &a);
	printf("Tempo:");
	scanf("%d", &t);
	printf("Distancia percorrida:%f", (((float)a * (t * t)) / 2));
}
*/
/*Exercicio 5 Ficha 2
#include<stdio.h>
int main() {
	int a, b, c;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	printf("Novos valores - a=%d b=%d",a,b);
 
}
*/
/*Exercicio 4 Ficha 2 
#include<stdio.h>
int main() {
	float salario;
	printf("Digite o valor do seu salario:");
	scanf("%f", &salario);
	if(salario<400) {
		salario = salario + 100;
	}
	printf("Salario:%.0f euros", salario);

}
*/
/*Exercio 3 Ficha 2
#include<stdio.h>
int main() {
	int seg;
	printf("Digite o numero de segundos:");
	scanf("%d", &seg);
	int h = seg / 3600;
	int m = (seg%3600)/60;
	int s = (seg % 60);
	printf("h=%d,m=%d,s=%d",h ,m ,s);
}
*/

/*Exercio 2 Ficha 2 
#include<stdio.h>
#define Pi 3.14159265359
int main() {
	float raio;
	printf("Digite o raio da circunferencia:");
	scanf("%f", &raio);
	printf("O perimetro do circulo e %f\n", 2 * Pi * raio);
	printf("A area do circulo e %f", Pi * (raio * raio));  
}
*/