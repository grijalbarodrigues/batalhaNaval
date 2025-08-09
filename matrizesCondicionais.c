#include <stdio.h>

int main (){

    //EXEMPLO DA AULA HORA DE CODAR NIVEL MESTRE BATALHA NAVAL - PROCURAR UM NUMERO
    int matriz[10][10];
    int numProcurado = 12;
    int contEncontrado= 0;
    int soma = 1;

    //matriz com os valores sequenciais de acordo com o numero de linhas e colunas definidos
    for (int i = 0; i < 10; i++){
        for (int j =0; j < 10; j++){
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(matriz[i][j] ==numProcurado){
                printf("O numero %d foi localizado no indice (%d, %d)\n", numProcurado, i, j);
                contEncontrado = 1;
                //break; se quiser q ele pare apos localizar o primeiro precisa desse break no for interno
            }

        }
        //if (contEncontrado) break; tambem no for externo ... se eles nao estiverem ele vai fazer a busca e mostrar todos localizados
    }
    if(!contEncontrado){
        printf("O numero %d nao foi encontrado\n", numProcurado);
    }

    return 0;
}