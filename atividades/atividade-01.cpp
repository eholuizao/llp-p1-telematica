#include <stdio.h>

int main() {
	int N;
	printf("Digite o numero de linhas e colunas da matriz: ");
	scanf("%d", &N);
	
	int matriz1[N][N];
	int matriz2[N][N];
	
	// Primeira matriz
	
	for (int row = 0; row < N; row++) {
		for (int col = 0; col < N; col++) {
			int elem;
			printf("Digite o elemento [%d][%d] da matriz 1: ", row, col);
			scanf("%d", &elem);
			
			matriz1[row][col] = elem;
		}
	}
	
	// Segunda matriz
	for (int row = 0; row < N; row++) {
		for (int col = 0; col < N; col++) {
			int elem;
			printf("Digite o elemento [%d][%d] da matriz 2: ", row, col);
			scanf("%d", &elem);
			
			matriz2[row][col] = elem;
		}
	}
	
	// Diagonal
	printf("================================== \n");
	printf("NUMEROS DA DIAGONAL DA MATRIZ:");
	for (int i = 0; i < N; i++) {
		printf("%d ", matriz1[i][i]);
	}
	
	// Soma de Arrays
	int matrizSoma[N][N];
	
	for (int row = 0; row < N; row++) {
		for (int col = 0; col < N; col++) {
			matrizSoma[row][col] = matriz1[row][col] + matriz2[row][col];
		}
	}
	
	printf("\n================================== \n");
	printf("SOMA DA MATRIZ 1 E 2: \n");
	
	// Imprime a matriz soma
	printf("[ ");
	for (int row = 0; row < N; row++) {
		printf("{ ");
		for (int col = 0; col < N; col++) {
			if (col == N - 1) {
				printf("%d ", matrizSoma[row][col]);
			}
			else {
				printf("%d, ", matrizSoma[row][col]);
			}
		}
		
		if (row == N - 1) {
			printf("} ");
		}
		else {
			printf("}, ");
		}
	}
	printf("]");
	
	return 0;
}
