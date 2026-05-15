#include <stdio.h>

int main() {
    printf("Tamanho int*: %zu bytes\n", sizeof(int*));
    printf("Tamanho float*: %zu bytes\n", sizeof(float*));
    printf("Tamanho double*: %zu bytes\n", sizeof(double*));
    printf("Tamanho char*: %zu bytes\n", sizeof(char*));

    return 0;
}
