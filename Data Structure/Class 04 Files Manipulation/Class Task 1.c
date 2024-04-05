// Gere, linha por linha, um arquivo de texto com o seu conteúdo digitado pelo usuário durante a execução. 
// Agravação do arquivo de ser parada quando o usuário digitar FIM. Apresente, ao final do processamento, o total de linhas gravadas, no arquivo

#include <stdio.h>
#include <string.h>
#define MAX 101

int main () {
	char string[MAX];
	FILE *arq;
	
	arq = fopen ("arquivoSlide.txt", "w");
	
	if(arq == NULL){
		printf ("Erro ao abrir o arquivo\n");
		return 0;
	}
	
	
	printf ("Digite alguma coisa, caso o contrario digite FIM \n");
	scanf (" %[^\n]", string);
	
	while (strcmp(string, "FIM")) {
		fputs (string, arq);
		fputc ('\n', arq);
		
		printf ("Digite alguma coisa, caso o contrario digite FIM \n");
		scanf (" %[^\n]", string);
	}
	
	fclose (arq);
}
