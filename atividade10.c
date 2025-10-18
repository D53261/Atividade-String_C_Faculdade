#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main () {
    char palavra[MAX];

    int tamanho = 0;

    printf("Digite uma palavra: \n");
    scanf("%[^\n]s", &palavra);


    for(int i = 0; palavra[i] != '\0'; i++) {
        tamanho ++;
    }

    for(int i = tamanho; i >=0; i--) {
        printf("%c", palavra[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}
