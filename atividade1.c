#include <stdio.h>
#include <string.h>

#define MAX 50

// Fac ̧a um programa que entao leia uma string e a imprima.

int main() {
    char palavra[MAX];

    printf("Digite uma palavra: \n");
    scanf("%[^\n]s", &palavra);

    printf("Palavra digitada: %s \n", palavra);

    return 0;
}
