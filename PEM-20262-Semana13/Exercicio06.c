#include <stdio.h>

struct Produto {
    char nome[40];
    float preco;
    int estoque;
};

int main() {
    struct Produto prod = {"Mouse", 50.0, 5};
    struct Produto *ptr = &prod;

    (*ptr).preco = 55.0;
    printf("Preco (Forma 1): %.2f\n", (*ptr).preco);

    ptr->estoque = 10;
    printf("Estoque (Forma 2): %d\n", ptr->estoque);

    return 0;
}
