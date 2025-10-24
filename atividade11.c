#include <stdio.h>

#define MAX 100

// Faça um programa que receba do usuario uma string. O programa imprime a string sem suas vogais.

int main() {
    char str[MAX];

    printf("Digite uma string: \n");
    fgets(str, sizeof(str), stdin);

    printf("String sem vogais: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            printf("%c", c);
        }
    }
    printf("\n");

    return 0;
}
