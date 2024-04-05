#include <stdio.h>
#define MAX 3

struct livro {
	char titulo [50];
	char autor [50];
	int ano;
	float preco;
};


void imprimeGasto (struct livro precoGasto[]) {
	int i;
	float total = 0;
	
	for (i = 0; i < MAX; i++) {
			total += precoGasto[i].preco;
	}
	printf("O valor gasto em livros foi de: %.2f", total);
}


int main () {
	
	struct livro precoGasto[MAX];
	int i;
	
	for ( i = 0; i < MAX; i++) {
	scanf("%s", precoGasto[i].titulo);
	scanf("%s", precoGasto[i].autor);
	scanf("%i", &precoGasto[i].ano);
	scanf("%f", &precoGasto[i].preco);
}
	
	imprimeGasto (precoGasto);
	return 0;
}
