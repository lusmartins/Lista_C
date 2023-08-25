//Escreva um Programa que receba a idade de uma pessoa, calcule e imprima a
//e diga se a pessoa é maior de idade (idade >= 18 anos) ou não.

#include <stdio.h>

int main (){
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d",&idade);

    if(idade>=18){
        printf("\n VOCE E MAIOR DE IDADE");
    }

    else{
        printf("\n VOCE E UM PIRRALHO");
    }

return 0;
}
