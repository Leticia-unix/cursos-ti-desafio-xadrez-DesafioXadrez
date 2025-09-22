#include <stdio.h>
int main(){
    int matriz [10][10] = {
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,3,3,3,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,3,0,0},
    {0,0,0,0,0,0,0,3,0,0},
    {0,0,0,0,0,0,0,3,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}

   };
   printf("matriz 10x10:\n");
   for(int i = 0; i <10;i++){//define as linhas
    for(int j = 0; j<10;j++){// define as colunas
        printf(" %d ", matriz[i][j]);
    }
    printf("\n");//nova linha após cada linha da matriz
   }




    return 0;
}