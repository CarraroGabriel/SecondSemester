#include <stdio.h>

int main () {
	char letra = 'G';
	char *ptr;
	
	ptr = &letra;
	
	printf("%c", *ptr);
}
