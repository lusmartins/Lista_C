//===================================================================
//Faca um programa que leia 2 valores inteiros e mostre na tela
// a soma,subtracao, produto e divisao entre os dois.
//DICA:  Use \n pra quebrar linha   boa sorte ;)
//===================================================================

#include <stdio.h>

int main(){
    int a, b;
    printf(" Digite dois valores inteiros: \n");
    scanf("%d %d", &a, &b );

    int soma = a+b;
    printf("soma dos valores atibuidos = %d \n", soma);

    int subtracao = a-b;
    printf ("subtracao dos valores atribuidos = %d \n", subtracao);

    int produto = a*b;
    printf("produto dos valores atribuidos = %d \n", produto);

    int divisao = a/b;
    printf ("divisao dos valores atribuidos = %d \n", divisao);
return 0;
}
