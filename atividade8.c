#include <stdio.h>

#define MAX 100

// Fac ̧a um programa que conte o numero de 1’s que aparecem em um string. Exemplo: “0011001” -> 3

int main() {
    char str[MAX];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') {
            contador++;
        }
    }

    printf("Número de '1's: %d\n", contador);

    return 0;
}
