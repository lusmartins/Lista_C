//===================================================================
//Faca um programa que rebeba 2 valores inteiros e
// pergunte ao mesmo qual o resultado da soma. Se o usuario acertar
//mostre na tela: PARABÉNS VC ACERTOU.
// E se errar, mostre: QUE PENA VC ERROU.
//DICA:  Use \n pra quebrar linha   boa sorte ;)
//===================================================================
 #include <stdio.h>

 int main (){
     int a=659 , b=321;
     int resultado;
     printf("(659 + 321). Qual o resultado da soma dos numeros atribuidos? \n");
     scanf("%d", &resultado );
     int soma = a+b;
     printf("\n soma dos valores = %d", soma);

     if(soma==resultado){
        printf(" \n PARABENS VOCE ACERTOU");
     }
     else{
        printf("\n QUE PENA VOCE E BURRO");
     }

 return 0;
 }
