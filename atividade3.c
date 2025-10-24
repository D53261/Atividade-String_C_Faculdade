#include <stdio.h>

#define MAX 100

// Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiuscula ou minuscula).

int main() {
    char name[MAX];

    printf("Digite um nome: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] == 'a' || name[0] == 'A') {
        printf("%s", name);
    }

    return 0;
}
