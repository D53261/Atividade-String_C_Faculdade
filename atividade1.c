#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char palavra[MAX];

    printf("Digite uma palavra: \n");
    scanf("%[^\n]s", &palavra);

    printf("Palavra digitada: %s \n", palavra);

    return 0;
}
