#include <stdio.h>

int main (){

    //EXEMPLO 1 -  ATRIBUINDO VALORES DAS POSICOES E SOMANDO
    int matriz[3][3]; //declarando a quantidade de posicoes q tera a matriz
    
    //loops aninhados para percorrer para indice e fazer as somas
    for(int i =0; i<3;i++){
        for(int j=0; j<3; j++){
            matriz[i][j] = i + j;
            
        }
    }
    //outro loop aninhado para percorrer cada indice e MOSTRAR as somas
    for(int i = 0; i<3;i++){
        for (int j=0; j<3; j++){
            printf("Matriz[%d][%d] = %d\n", i,j,matriz[i][j]);
        }
    }

    //exemplo 2 = operacao de matrizes com valores atribuidos
    printf("Exemplo 2\n");
    int matriz1[2][2] = {{1,2}, {3,4}};
    int matriz2[2][2] = {{5,6}, {7,8}};
    int somaMatriz[2][2];

    //somando as duas matrizes:
    for(int i=0;i<2;i++){
        for (int j=0; j<2; j++){
            somaMatriz[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    //outro for para mostrar o resultado de somaMatriz
    for (int i=0;i<2;i++){
        for(int j=0; j<2; j++){
            printf("somaMatriz[%d][%d] = %d\n", matriz1[i][j],matriz2[i][j],somaMatriz[i][j]);
        }
    }
   
    return 0;
}