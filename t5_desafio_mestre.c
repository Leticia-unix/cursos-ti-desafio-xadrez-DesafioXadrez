#include <stdio.h>

int main (){
 
 // Matriz 10x10 inicializada com 0
    int matriz_10x10[10][10] = {0};

      // Matriz 5x5 (primeira)
    int matrizn[3][5] = {
        {0, 0, 3, 0, 0},
        {0, 3, 3, 3, 0},
        {3, 3, 3, 3, 3}
    };

    // Matriz 5x5 (primeira)
    int matriz_5x5_1[3][5] = {
        {0, 0, 3, 0, 0},
        {3, 3, 3, 3, 3},
        {0, 0, 3, 0, 0}
    };

    // Matriz 5x5 (segunda)
    int matriz_5x5_2[3][5] = {
        {0, 0, 3, 0, 0},
        {0, 3, 3, 3, 0},
        {0, 0, 3, 0, 0}
    };

    // Matriz 5x5 (segunda)
    int matrizna[3][1] = {
        {5},
        {5},
        {5}
    };

    int matrizna_1[3][1] = {
        {5},
        {5},
        {5}
    };
  
   



    // Posições de início para sobrepor as matrizes 5x5 na matriz 10x10
    int i_matriz_1 = 1, j_matriz_1 = 1;  // Posição da primeira matriz
    int i_matriz_2 = 4, j_matriz_2 = 4;  // Posição da segunda matriz
    int i_matriz_3 = 7, j_matriz_3 = 1;  // Posição da terceira matriz

    //navios
int i_matrizna_2 = 1, j_matrizna_2 = 6; 
int i_matrizna_3 = 5, j_matrizna_3 = 3; 


//navios
 for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            if (i_matrizna_3 + i < 10 && j_matrizna_3 + j < 10) {
                matriz_10x10[i_matrizna_3 + i][j_matrizna_3 + j] = matrizna[i][j];
            }
        }
    }

//navio1    
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            if (i_matrizna_2 + i < 10 && j_matrizna_2 + j < 10) {
                matriz_10x10[i_matrizna_2 + i][j_matrizna_2 + j] = matrizna_1[i][j];
            }
        }
    }










    // Laços aninhados para sobrepor a primeira matriz 5x5
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i_matriz_1 + i < 10 && j_matriz_1 + j < 10) {
                matriz_10x10[i_matriz_1 + i][j_matriz_1 + j] = matriz_5x5_1[i][j];
            }
        }
    }

    // Laços aninhados para sobrepor a segunda matriz 5x5
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i_matriz_2 + i < 10 && j_matriz_2 + j < 10) {
                matriz_10x10[i_matriz_2 + i][j_matriz_2 + j] = matriz_5x5_2[i][j];
            }
        }
    }

    // Laços aninhados para sobrepor a terceira matriz 5x5
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i_matriz_3 + i < 10 && j_matriz_3 + j < 10) {
                matriz_10x10[i_matriz_3 + i][j_matriz_3 + j] = matrizn[i][j];
            }
        }
    }

 


    // Exibindo a matriz 10x10 após a sobreposição
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz_10x10[i][j]);
        }
        printf("\n");
    }


     
    

return 0;

}
