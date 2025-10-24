#include <stdio.h>

#define MAX 100

// Escreva um programa que substitui as ocorrencias de um caractere ‘0’ em uma string por outro caractere ‘1’.

int main() {
    char str[MAX];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0') {
            str[i] = '1';
        }
    }

    printf("String modificada: %s", str);

    return 0;
}
