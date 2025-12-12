#include<stdio.h>
#include<string.h>

int isnull(char *str) {
	return str[0] == '\0';
}
int strleno(char *str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
char* strlwr(char* str) {
	int i;
	for (i = 0; str[i]; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	return str;
}
char* strupr(char* str) {
	int i;
	for (i = 0; str[i]; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
	return str;
}
int strcountc(char *str, char c) {
	int i,cnt=0;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == c) {
			cnt++;
		}
	}
	return cnt;
}
int indchr(char *str, char c) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == c) {
			return i;
		}
	}
	return -1;// nao foi encontrado
}
int iswhite(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}
char *trimright(char *str) {
	int i;
	for (i = strleno(str) - 1; i >= 0; i++) {
		if (!iswhite(str[i])) {
			str[i + 1] = '\0';
			return str;
		}
	}
	return str;
}
char* trimleft(char* str) {
	int i,j;
	for (i = 0; str[i] != '\0' && iswhite(str[i]); i++);
	if (i > 0) {
		j = 0;
		while (str[i] |= '\0') {
			str[j++] = str[i++];
		}
		str[j] = '\0';
	}
	return str;
}
char* strcpy(char* dest, char* src) {
	int i;
	for (i = 0; src[i] != '\0'; i++) {
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
char *strcat(char* dest, const char* src) {
	int i, len = strleno(dest);
	for (i = 0; src[i] != '\0'; i++) {
		dest[len + i] = '\0';
	}
	dest[len + i] = '\0';
	return dest;
}
int palidroma(char* str) {
	int i, len = strleno(str);
	for (i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1])
			return 0;
	}
	return 1;
}
int strcmp(char* str1, char* str2) {
	int i;
	for (i = 0; str1[i] && str2[i] != '\0'; i++);
	return str1[i] - str2[i];
}
char lwr_char(char c) {
	if (c >= 'A' && c <= 'Z')
		return c + 32;
	else
		return c;
}
int stricmp(char* s1, char* s2) {
	int i;
	for (i = 0; lwr_char(s1[i]) == lwr_char(s2[i]) && s1[i] != '\0';i++);
		return lwr_char(s1[i])- lwr_char(s2[i]);
}
char* strdelc(char* str, char c) {

	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return str;
}
int main() {
	char f1[] = "";
	printf("%s", isnull(f1) ? "SIM":"NAO");
	char f2[] = "Nelson";
	printf("\n Tamanho da palavra %s:%d\n", f2, strleno(f2));
	char f3[] = "DIOGO";
	printf("\n Minusculas:%s\n", strlwr(f3));
	char f4[] = "diogo";
	printf("\n Maiusculas:%s\n", strupr(f4));
	char f5[] = "Diogo Fernandes";
	char ch = 'o';
	printf("\nContar letra o %s:%d\n", f5, strcountc(f5, ch));
	char f6[] = "Diogo Fernandes";
	char ch1 = 'i';
	printf("\nPosiçao da letra i:%d\n", indchr(f6, ch1));
	char f7[30] = "Diogo fernandes        ";
	printf("\n%s,%s\n",f7, trimright(f7));
	char f8[] = "        Diogo Fernandes";
	printf("\n%s,%s\n",f8, trimleft(f8));
	char f9[] = "";
}