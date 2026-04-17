#include <stdio.h>
    int main(){

        int navio1[3] = {3, 3 ,3};
        int navio2[3] = {3, 3 ,3};
        char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',};
        int tabuleiro[10][10] = {
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {3, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {4, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {5, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {6, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {7, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {8, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {9, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {10, 0, 0, 0, 0, 0, 0, 0, 0, 0}

        };

        printf("TABULEIRO BATALHA NAVAL\n");

        for(int j = 3; j < 6; j++){
            tabuleiro[7][j] = navio1[j - 3];
        }

        for(int j = 3; j < 6; j++){
            tabuleiro[j][2] = navio2[j - 3];
        }




        for(int i = 0; i < 10; i++){

            printf(" %c", linha[i]); //linha

        }
            printf("\n");
        
        for(int i = 0; i < 10; i++) { //linha
            for(int j = 0; j < 10; j++) { //coluna
                printf(" %d", tabuleiro[i][j]);
            }
            printf("\n");

        }
        
        

        return 0;
    }