#include <stdio.h>
#define MAX 5

struct livro {
	char titulo [50];
	char autor [50];
	int ano;
	float preco;
};


void precosLivro (struct livro precoLivros[]) {
	int i;
	
	for (i = 0; i < MAX; i++) {
		if (precoLivros[i].preco > 50) {
			printf("O livro %s apresenta um valor maior que 50 reais\n", precoLivros[i].titulo);
		}
	}
}


int main () {
	
	struct livro precoLivros[MAX];
	int i;
	
	for ( i = 0; i < MAX; i++) {
	scanf("%s", precoLivros[i].titulo);
	scanf("%s", precoLivros[i].autor);
	scanf("%i", &precoLivros[i].ano);
	scanf("%f", &precoLivros[i].preco);
}
	
	precosLivro (precoLivros);
	return 0;
}
