#include <stdio.h>


int main(){
    


    int matriz[10][10] = {0};  // Inicializa a matriz com zeros

    // navios
    //navios na diagonal 
    matriz[2][3] = 3;
    matriz[3][4] = 3;
    matriz[4][5] = 3;

    //navio 2
    matriz[9][0] = 3;
    matriz[8][1] = 3;
    matriz[7][2] = 3;
    
// horizontal
//N1
    matriz[6][8] = 3;
    matriz[7][8] = 3;
    matriz[5][8] = 3;

//N2
    matriz[0][1] = 3;
    matriz[1][1] = 3;
    matriz[2][1] = 3;



    // Imprime a matriz para verificar as alterações
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

  









    return 0;
}