#include <stdio.h>

int main() {
    // simulação do movimento das peças: Torre, Bispo, Rainha e Cavalo
    // Cada uma usa uma estrutura de repetição diferente

    //TORRE - 5 casa para direita
    //Usando FOR

    int casaTorre = 5;
    printf("Movimento da torre: \n");

    for(int i = 1; i <= casaTorre; i++){
        printf("Direita (%d)\n", i);
    }

    //BISPO - 5 casa na diagonal (cima direita)
    //Usando o WHILE
    int casasBispo = 5;
    int contBispo = 1;
    printf("\nMovimento do BISPO: \n");

    while (contBispo <= casasBispo){
        printf("Cima, Direita (%d)\n", contBispo);
        contBispo++;
    }

    //RAINHA - 8 casas para a esquerda
    // Usando DO-WHILE
    int casasRainha = 8;
    int contRainha = 1;
    printf("\nMovimento da RAINHA:\n");

    do{
        printf("Esquerda (%d)\n",contRainha);
        contRainha++;
    }while (contRainha <= casasRainha); 

    //CAVALO - movimento em "L"
    // 2 casas para baixo e 1 para esquerda
    //Usando o FOR + WHILE (loops aninhados)
    int casasBaixo = 2;
    int casasEsquerda = 1;
    int cont = 1;
    printf("\nMovimento do CAVALO:\n");

    //primeiro o cavalo desce 2 casas (for)
    for(int i = 1; i <= casasBaixo; i++){
        printf("Baixo (%d)\n", i);
    }

    //depois ele vai 1 casa para a esqueda (while)
    while(cont <= casasEsquerda){
        printf("Esquerda (%d)\n" ,cont);
        cont++;
    }
    return 0;
}
