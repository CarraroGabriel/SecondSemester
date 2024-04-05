#include <stdio.h>

int main () {
	char vet[7] = {'G', 'A', 'B', 'R', 'I', 'E', 'L'};
	char *ptr;
	
	ptr = &vet[0];
	printf("%c \n", *ptr);
	
	ptr += 1;
	printf("%c \n", *ptr);
	
	ptr += 1;
	printf("%c \n", *ptr);
	
	ptr +=1; 
	printf("%c \n", *ptr);
	
	ptr +=1; 
	printf("%c \n", *ptr);
	
	ptr +=1; 
	printf("%c \n", *ptr);
	
	ptr +=1; 
	printf("%c \n", *ptr);
}
