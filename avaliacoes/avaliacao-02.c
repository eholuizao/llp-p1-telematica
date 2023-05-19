#include <stdio.h>

void imprimirMatriz(int *matriz, int size) {
	int i, j;
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			/* 
			O 3° placeholder é substituído por uma operação aritmética com ponteiros
			que realiza a iteração sobre a matriz.
			*/
			printf("elemento [%d][%d] = %d \n", i, j, *((matriz + i * size) + j));
		}
	}
}

void somaMatriz(int *matrizA, int *matrizB, int *matrizC, int size) {
	int i, j;
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			*((matrizC + i * size) + j) = *((matrizA + i * size) + j) + *((matrizB + i * size) + j);
		}
	}
}

int main() {
	int matriz[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int matriz2[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int matriz3[][3] = {};
	int tamanho = sizeof(matriz) / sizeof(matriz[0]);
	
	somaMatriz(matriz, matriz2, matriz3, tamanho);
	imprimirMatriz(matriz3, tamanho);
	
	return 0;
}

