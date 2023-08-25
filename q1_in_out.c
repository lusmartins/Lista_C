//=================Professor Allan Michel============================
// Aluna: Luciana Martins
//===================================================================
// Faca um programa que leia nome e idade do usuário e depois mostre
// a mensagem: "Ola, meu nome eh [nome] e tenho [idade] anos."
//===================================================================

#include <stdio.h>
int main(){
    char nome[100];
    printf("digite seu nome: \n");
    scanf("%s", &nome);
    printf("%s, ", nome);

    int idade;
    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("Ola, meu nome eh %s e tenho %d anos", nome, idade);
return 0;

}
