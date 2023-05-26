#include <stdio.h>
#include <string.h>

struct Pessoa {
	char nome[30];
	char sobrenome[30];
	int anoNascimento;
};

struct Pessoa criaPessoa(struct Pessoa *px ) {
	struct Pessoa *p = px;
	
	char nome[30];
	char sobrenome[30];
	int anoNascimento;
	
	printf("Nome:");
	fgets(nome, sizeof nome, stdin);
	
	printf("Sobrenome:");
	fgets(sobrenome, sizeof sobrenome, stdin);
	
	printf("Ano de nascimento:");
	scanf("%d", &anoNascimento);
	
	strcpy(p->nome, nome);
	strcpy(p->sobrenome, sobrenome);
	p->anoNascimento = anoNascimento;
	
	return *p;
}

int main() {
	struct Pessoa px;
	struct Pessoa p1 = criaPessoa(&px);
	FILE *file;
	
	file = fopen("structs.txt", "w");
	fprintf(file, "Nome: %s\nSobrenome: %s\nAno de Nascimento: %d", p1.nome, p1.sobrenome, p1.anoNascimento);
	fclose(file);
	
	printf("\nDados da struct salvos com sucesso.\n");
	printf("Nome: %s\nSobrenome: %s\nAno de Nascimento: %d", p1.nome, p1.sobrenome, p1.anoNascimento);
	
	return 0;
}


