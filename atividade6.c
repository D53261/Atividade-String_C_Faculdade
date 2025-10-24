#include <stdio.h>
#include <stdlib.h>
//Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra “ACEITA”, caso contrario imprimir “NÃO ACEITA”.
int main (){
    int idade;
    char genero;

    printf("insira seu genero:\nH para homem\nM para mulher \n");
    scanf("%s", &genero);
    if (genero == "H" || genero == "h"){
        printf("NAO ACEITO");
    } else {
        printf("insira sua idade: \n");
        scanf("%d", &idade);
        if(idade<25){
            printf("NAO ACEITO");
        } else {
            printf("ACEITA");
        }
    }
    return 0;
}
