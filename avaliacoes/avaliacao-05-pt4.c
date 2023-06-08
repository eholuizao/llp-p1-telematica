#include <stdio.h>
#include <string.h>

int main() {
	FILE *arq;
	char character;
	int numVogais, numConsoantes;
	
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
		if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
            if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
                character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
                numVogais++;
            } else {
                numConsoantes++;
            }
        }
	}
	
	printf("O arquivo tem %d vogais e %d consoantes", numVogais, numConsoantes);
	
	fclose(arq);

	return 0;
}
