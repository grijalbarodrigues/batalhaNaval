#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define AGUA 0

int main (){

    int matriz[LINHAS][COLUNAS];

    //inicializar a matriz vazia = agua (0)
    for (int i = 0; i<LINHAS; i++){
        for (int j=0; j<COLUNAS; j++){
            matriz[i][j] = AGUA; 
        }
    }

    //******CRUZ:
    //definir o ponto central da CRUZ
    int cruzX = 1, CruzY = 1;
    matriz[cruzX][CruzY]=5;
    //definir as exrtemidades da cruz
    matriz[cruzX][CruzY+1] = 5;
    matriz[cruzX][CruzY-1] = 5;
    matriz[cruzX+1][CruzY] = 5;
    matriz[cruzX-1][CruzY] = 5;

    //CONE:
    int topoConeX = 1;
    int topoConeY = 7;

    int esquerdaCone = 0;
    int direiraCone = 0;

    for(int i = topoConeX;  i < topoConeX +3; i++){
        int inicio = topoConeY - esquerdaCone; 
        int fim = topoConeY + direiraCone;
        
        for(int j = inicio; j <= fim;j++){
            matriz[i][j] = 5;
        }
        esquerdaCone++;
        direiraCone++; 
    }

        
            

    for (int i = 0; i<LINHAS; i++){
        for (int j=0; j<COLUNAS; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");     
    }       

    
    return 0;
}