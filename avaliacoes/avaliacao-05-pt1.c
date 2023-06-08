#include <stdio.h>
#include <string.h>

int main() {
	FILE *arq;
	char character;
	
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
		printf("%c", character);
	}
	
	fclose(arq);

	return 0;
}
