#include <stdio.h>

#define TAM 10

    int main(){
    
        int navio1[3] = {3, 3, 3};
        int navio2[3] = {3, 3, 3};
        int navio3[3] = {3, 3, 3};
        int navio4[3] = {3, 3, 3};
        char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',};
        int tabuleiro[10][10] = {};
        int cone[TAM][TAM];
        int origemx = 5, origemy = 8;
        int alcance = 3;
        
        printf("TABULEIRO BATALHA NAVAL\n");

        //for(int j = 3; j < 6; j++){
            //tabuleiro[7][j] = navio1[j - 3];
        //}

        //for(int j = 3; j < 6; j++){
            //tabuleiro[j][1] = navio2[j - 3];
        //}

        //for(int i = 3; i < 6; i++) {
        
            //tabuleiro[6-i][7-i] = navio3[i - 3];
        
            //}
        
        //for(int i = 3; i < 6; i++) {

            //tabuleiro[8-i][7-i] = navio4[i - 3];
        //}



        for(int i = 0; i < 10; i++){

            printf(" %c", linha[i]); //linha

        }
            printf("\n");

           for(int i = 0; i < 10; i++) { //linha
               tabuleiro[i][0] = i;
            }

        //for(int i = 0; i < 10; i++) { //linha
            //for(int j = 0; j < 10; j++) { //coluna
                //printf(" %d", tabuleiro[i][j]);
            //}
            //printf("\n");
        //}
        
        for (int i = 0; i <= alcance; i++) {
            int linhaAtual = origemy - i;

            if (linhaAtual >= 0 && linhaAtual < TAM) {
                for (int j = origemx - i; j <= origemx + i; j++) {
                    
                if (j >= 0 && j < TAM) {
                    if(tabuleiro[linhaAtual][j] == 0) {
                        tabuleiro[linhaAtual][j] = 5;
                    }
                    else if (tabuleiro[linhaAtual][j] == 3){
                        tabuleiro[linhaAtual][j] = 5;
                        
                        }
                    }
                }  
            }
        }
        
      
        origemx = 4; 
        origemy = 2; 
        alcance = 2;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                int distY = (i > origemy) ? (i - origemy) : (origemy - i);
                    int distX = (j > origemx) ? (j - origemx) : (origemx - j);
                        if (distX + distY <= alcance) {
                                if (tabuleiro[i][j] == 0 || tabuleiro[i][j] == 3) {
                                tabuleiro[i][j] = 5;
                        }
                    }
                }
            }

            origemx = 8; 
            origemy = 2; 
            alcance = 2;

        for (int i = -alcance; i <= alcance; i++) {
            int xH = origemx + i;
                if (xH >= 0 && xH < 10) {
                    if (tabuleiro[origemy][xH] == 0 || tabuleiro[origemy][xH] == 2) tabuleiro[origemy][xH] = 5;
        }
                    int yV = origemy + i;
                    if (yV >= 0 && yV < 10) {
                    if (tabuleiro[yV][origemx] == 0 || tabuleiro[yV][origemx] == 2) tabuleiro[yV][origemx] = 5;
    }
}  


        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf(" %d", tabuleiro[i][j]);
            }
                printf("\n");
        }

        return 0;
    }