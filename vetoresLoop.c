#include <stdio.h>

int main (){
    printf("Exemplo 1\n");
/*    int vetor[5];//declaracao de um vetor de 5 inteiros

    //inicializacao do vetor usando uma estrutura de repeticao for
    for (int i=0; i<5;i++){
        vetor[i] = i * 3;//atribuicao dos valores do vetor
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }*/
    printf("Exemplo 2\n");

    int vetor[5] = {1,2,3,4,5};
    int soma = 2;

    //calcular a soma dos vetores com o valor atribuido para SOMA
    for(int i=0;i<5;i++){
        printf("soma vale: %d \n", soma);
        soma += vetor[i];
        
        printf("%d + %d = %d\n", soma, vetor[i], soma);
    }
    

    return 0;
}