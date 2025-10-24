#include <stdio.h>
#include <string.h>

#define MAX 50

// faça um programa que leia um nome e imprima as 4 primeiras letras do nome.

int main() {
    char palavra[MAX];

    printf("Digite uma palavra: \n");
    scanf("%[^\n]s", &palavra);

    printf("Primeiras 4 letras: ");

    for (int i = 0; i < 4; i++) {
        printf("%c", palavra[i]);
    }

    return 0;
}
