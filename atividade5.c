#include <stdio.h>

#define MAX 100

// Digite um nome, calcule e retorne quantas letras tem esse nome.

int main() {
    char nome[MAX];
    int contador_letras = 0;

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    for (int i = 0; nome[i] != '\0'; i++) {
        if ((nome[i] >= 'a' && nome[i] <= 'z') || (nome[i] >= 'A' && nome[i] <= 'Z')) {
            contador_letras++;
        }
    }

    printf("O nome tem %d letras.\n", contador_letras);

    return 0;
}
