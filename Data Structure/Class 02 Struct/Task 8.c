#include <stdio.h>
#define MAX 3

struct livro {
	char titulo [50];
	char autor [50];
	int ano;
	float preco;
};


void imprimeCaro (struct livro precoCaro[]) {
	int i;
	float maior = -1;
	
	for (i = 0; i < MAX; i++) {
		if (precoCaro[i].preco > maior) {
			maior = precoCaro[i].preco;
		}
	}
	printf("O valor do livro mais caro eh: %.2f", maior);
}


int main () {
	
	struct livro precoCaro[MAX];
	int i;
	
	for ( i = 0; i < MAX; i++) {
	scanf("%s", precoCaro[i].titulo);
	scanf("%s", precoCaro[i].autor);
	scanf("%i", &precoCaro[i].ano);
	scanf("%f", &precoCaro[i].preco);
}
	
	imprimeCaro (precoCaro);
	return 0;
}
