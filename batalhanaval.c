#include <stdio.h>
    int main(){

        int navio1[3] = {3, 3, 3};
        int navio2[3] = {3, 3, 3};
        int navio3[3] = {3, 3, 3};
        int navio4[3] = {3, 3, 3};
        char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',};
        int tabuleiro[10][10] = {};
        
        printf("TABULEIRO BATALHA NAVAL\n");

        for(int j = 3; j < 6; j++){
            tabuleiro[7][j] = navio1[j - 3];
        }

        for(int j = 3; j < 6; j++){
            tabuleiro[j][1] = navio2[j - 3];
        }

        for(int i = 3; i < 6; i++) {
        
            tabuleiro[i][i] = navio3[i - 3];
        
            }
        
        for(int i = 3; i < 6; i++) {

            tabuleiro[5-i][i] = navio4[i - 3];
        }



        for(int i = 0; i < 10; i++){

            printf(" %c", linha[i]); //linha

        }
            printf("\n");

           for(int i = 0; i < 10; i++) { //linha
               tabuleiro[i][0] = i;
            }

        for(int i = 0; i < 10; i++) { //linha
            for(int j = 0; j < 10; j++) { //coluna
                printf(" %d", tabuleiro[i][j]);
            }
            printf("\n");

    
        }
        
        

        return 0;
    }