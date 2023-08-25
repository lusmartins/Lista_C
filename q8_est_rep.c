        //=================Professor Allan Michel============================
// Aluna: Luciana Martins
//===================================================================
//faca um programa que receba 2 notas de um aluno e faca sua media
//se  ela for maior que 6 imprima: APROVADO
//e se for abaixo de 6 imprima reprovado. bjs ;)
//===================================================================
#include <stdio.h>

int main(){
    float a, b;
    printf("DIGITE 2  NOTAS: ");
    scanf("%f %f", &a, &b);
    float media = (a+b)/2;
    printf("\n media = %f", media);

    if(media>6){
        printf("\n APROVADO");
    }
    else{
        printf("\n REPROVADO");
    }
return 0;
}
