#include <stdio.h>
void print_matriz(int *matriz, int rows) {
	int i, j;
	
    for(i = 0; i < rows; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", *((matriz + i * rows) + j));
        }
        printf("\n");
    }
}

int main() {
    int matriz[][3] = {{1, 2, 2}, {4, 5, 2}, {4, 5, 4}};
    int tamanho = sizeof(matriz) / sizeof(matriz[0]);
    
    printf("%d", sizeof(matriz[0]));
 
    print_matriz((int *)matriz, tamanho);
    return 0;
}

