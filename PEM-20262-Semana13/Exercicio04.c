#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    struct Aluno a = {"Joao", 123, 8.5};

    printf("Endereco Nome: %p\n", (void*)&a.nome);
    printf("Endereco Matricula: %p\n", (void*)&a.matricula);
    printf("Endereco Media: %p\n", (void*)&a.media);

    return 0;
}
