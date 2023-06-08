#include <stdio.h>
#include <string.h>

int main() {
	FILE *arq;
	char character;
	int numVogais;
	
	arq = fopen("arq.txt", "w");
	
	printf("Digite caracteres para adicionar ao arquivo (0 para parar): ");
	while (1) {
		
		scanf("%c", &character);
		
		if (character == '0') {
			break;
		}
		
		fputc(character, arq);
	}
	
	fclose(arq);
	
	arq = fopen("arq.txt", "r");
	
	while((character = fgetc(arq)) != EOF) {
		if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
            character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
            	numVogais++;
			}
	}
	
	printf("O arquivo tem %d vogais", numVogais);
	
	fclose(arq);

	return 0;
}
