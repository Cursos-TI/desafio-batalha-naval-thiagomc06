#include <stdio.h>

#define LINHA 3
#define COLUNA 5

int main(){

char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //CABEÇALHO DAS COLUNAS
int linhas[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //LINHAS NUMERADAS
int tabuleiro[10][10] = {0}; //MATRIZ
int cone[LINHA][COLUNA] = {0};
int cruz[LINHA][COLUNA] = {0};
int octaedro[LINHA][COLUNA] = {0};

            printf("MATRIZ CONE\n");

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if((i == 0 && j == 2) || (i == 1 && j >= 1 && j < 4) || (i == 2 && j < COLUNA)){
                cone[i][j] = 1;
        }
            printf("%2d ", cone[i][j]);
        }
            printf("\n");
    }
            printf("\n");

            printf("MATRIZ CRUZ\n");

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if((i == 0 && j == 2) || (i == 1 && j <= 4) || (i == 2 && j == 2)){
                cruz[i][j] = 4;
        }
            printf("%2d ", cruz[i][j]);
        }
            printf("\n");
    }
            printf("\n");

            printf("MATRIZ OCTAEDRO\n");

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if((i == 0 && j == 2) || (i == 1 && j >= 1 && j < 4) || (i == 2 && j == 2)){
                octaedro[i][j] = 5;
        }
            printf("%2d ", octaedro[i][j]);
        }
            printf("\n");
    }
            printf("\n");

            printf("     TABULEIRO\n     ");
            printf("\n");

// LÓGICA DO POSICIONAMENTO DOS NAVIOS
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            
            
            if((i == j && i < 3) || (i + j == 9 && j > 3 && j < 7) || (i == 6 && j >= 2 && j < 5) || (i >= 1 && i < 4 && j ==8)) {  // Condição para criar a diagonal principal limitada
                tabuleiro[i][j] = 3; // posição dos navios
            }else if((i == 0 && j == 4) || (i == 1 && j >= 3 && j < 6) || (i == 2 && j > 1 && j < 7)){
                tabuleiro[i][j] = 1; // posição do cone
            }else if((i == 5 && j == 7) || (i == 6 && j >= 5 && j <= 9) || (i == 7 && j == 7)){
                tabuleiro[i][j] = 4; // posição da cruz
            }else if((i == 3 && j == 1) || (i == 4 && j >= 0 && j < 3) || (i == 5 && j == 1)){
                tabuleiro[i][j] = 5; // posição do octaedro
    }
}
    }
        printf("   "); //IMPRIME O CABEÇALHO
    for (int j = 0; j < 10; j++){

        printf(" %c ", colunas[j]);
    }

        printf("\n");

    for (int i = 0; i < 10; i++){ // LOOP PARA IMRPRIMIR AS LINHAS NUMERADAS
        printf("%2d ", linhas[i]);
        for(int j = 0; j < 10; j++){ // LOOP PARA IMPRIMIR O TABULEIRO
            printf(" %d ", tabuleiro[i][j]);
        }
            printf("\n");
    }

    
    
    }
