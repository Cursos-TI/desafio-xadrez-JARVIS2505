#include <stdio.h>

//Função REcursiva da TORRE
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1); // chamar de novo
    }
}

//Função Recursiva da RAINHA
void moverRainha(int casas){
    if(casas > 0){
        printf("Esqueda\n");
        moverRainha(casas - 1);
    }
}

//Função Recursiva do BISPO usando loops aninhado.
void moverBispo(int casas){
    if(casas > 0){
        
        //Loop pra cima
        for (int i = 0; i < 1; i++){

            //Loppe para a Direita
            for(int j = 0; j < 1; j++){
                printf("Direita\n");
            }
        }

        moverBispo(casas - 1); // Recursão
    }
}

// CAVALO com Loops mais complicados
void moverCavalo(int casas){

    int cima = 2; // o cavalo vai subir 2 casas
    int direita = 1; // depois ele vai 1 casa para a direita

    //primeiro o cavalo sobe
    for(int i =1; i <= cima; i++){

        //esse if é só pra usar continue mesmo, nunca vai acontecer.
        if(i == -1){
            continue;
        }

        //mostra que o cavalo subiu uma casa
        printf("Cima (%d)\n", i);

        // loop para a parte da direita (so vai rodar no final)
        for(int j = 1; j <= direita; j++){

            //esse if é so a para usar o break, tambem nunca acontece
            if (j > 1){
                break;
        }

        //O cavalo só vai para a direita depois de ja ter subido tudo
        if( i == cima){
        printf("Direita (%d)\n", j);

        }
    }

}

int main(){

    //TORRE//
    printf("Movimeto da TORRE: \n");
    moverTorre(5);
    printf("\n");

    //BISPO//
    printf("Movimento do BISPO: \n");
    moverBispo(5);
    printf("\n");

    //RAINHA//
    printf("Monvimento da RAINHA: \n");
    moverRainha(8);
    printf("\n");

    //CAVALO//
    printf("Movimento do CAVALO: \n");
    moverCavalo();
    
    return 0;
}