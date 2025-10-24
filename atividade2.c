#include <stdio.h>
#include <string.h>

#define MAX 50

// Crie um programa que calcula o comprimento de uma string (nao use a função strlen).

int main() {
    char palavra[MAX];
    int tamanho;

    printf("Digite uma palavra: \n");
    scanf("%[^\n]s", &palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        tamanho++;
    }

    printf("Tamanho da String: %d \n", tamanho);

    return 0;
}
