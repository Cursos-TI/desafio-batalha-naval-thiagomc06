#include <stdio.h>

int main(){

char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //CABEÇALHO DAS COLUNAS
int linhas[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //LINHAS NUMERADAS
int tabuleiro[10][10] = {0}; //MATRIZ
                        

// LÓGICA DO POSICIONAMENTO DOS NAVIOS
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if ((i == j && i < 3) || (i + j == 9 && j > 3 && j < 7) || (i == 6 && j >= 2 && j < 5) || (i >= 1 && i < 4 && j ==8)) {  // Condição para criar a diagonal principal limitada
                tabuleiro[i][j] = 3;
                
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
