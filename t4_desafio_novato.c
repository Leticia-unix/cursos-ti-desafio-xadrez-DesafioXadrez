#include <stdio.h>
int main (){
    //mover a torre 5 casas para a direita
    printf("Movimento Torre\n");
    for(int i = 0; i < 5; i++){
        printf("direita\n"); //imprime a direção do movimento
    }

    //bispo
    int i=1;
    printf("Movimento Bispo\n");
    do
    {
        printf("Cima,Direita\n");
        i++;
    } while (i <=5);

    //Dama
    int d = 0;
    printf("Movimento Dama\n");
    while (d <=8)
    {
        printf("Esquerda\n");
        d++;
    }
    
    

    return 0;
}