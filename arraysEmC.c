#include <stdio.h>

int main (){

    //Array conjunto de valores do mesmo tipo
    //exemplo:
/*    
    int numeros[5] = {10,20,30,40,50}
*/
    //o array ´´e acessado por indíces:
    //exemplo:
/*  
    numeros[0] = 10
    numeros[1] = 20
    numeros[2] = 30
    numeros[3] = 40
    numeros[4] = 50
*/
    //exemplo 2?

/*
    char letras[4] = {'A', 'B', 'C', 'D'};

    printf("Primeira letra é: %c \n", letras[0]);
    printf("Segunda letra é: %c \n", letras[1]);
    printf("Terceira letra é: %c \n", letras[2]);
    printf("Quarta letra é: %c \n", letras[3]);
*/
    //exemplo 3: array com estrutura de repeticao:

/*
    char *nomes[] = {"Alice", "Bob", "Carol"};---> o tamanho nao foi especificado dentro das [] mas nao é um problema pq ja foram declarados

    for(int i = 0; i < 2; i++)---> aqui o i<2 pq tenho 3 indices e comeca do zero. 
    {
        printf("%s \n", nomes[i])
    }
*/

    return 0;
}