#include <stdio.h>
#include <string.h>

int main () {
	char nomes[5][50] = {("Gabriel Carraro"), ("Rafael Steffen"), ("Ruan Bueno"), ("Willian Sanini"), ("Douglas Kellermann")};
	char email[5][50] = {("gabrielcarraro.gr011@academico.ifsul.edu.br"), ("rafaelsteffen.gr014@academico.ifsul.edu.br"), ("ruanbueno.gr001@academico.ifsul.edu.br"), ("williansanini.gr003@academico.ifsul.edu.br"), ("douglaskellermann@ifsul.edu.br")};
	int i;
	
	for (i = 0; i<5; i++) {
		printf("%-20s\t", nomes[i]);
		printf("%s\n", email[i]);
	}
	
	return 0;
}
