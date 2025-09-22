#include <stdio.h>

void torre(int casas){
    if(casas > 0){
        printf("Direita\n", casas);
        torre(casas - 1);
    }
}

void dama(int casasD){
    if(casasD >0){
        
        printf("esquerda\n",casasD);
        dama(casasD - 1);
    }
}




int main(){
    
printf("Movimentos da torre\n");
torre(5);
printf("\n");

printf("Movimentos da dama\n");
dama(8);
printf("\n");



printf("Movimentos Bispo\n");
for(int cima= 3; cima >=1;cima-- ){     
    printf("Cima\n");
    for(int esquer = 1; esquer>=1; esquer-- ){
        
        printf("esquerda\n");
    }
    
}
printf("\n");

printf("Movimentos cavalo\n");
int movbaixo =3;
int movesquer = 1;
int i = 0;

while(i<1){
    for(int j =0; j < movbaixo; j++){
        printf("Baixo\n");
    }
    printf("Esquerda");
    i++;
}


    
    
    return 0;
}