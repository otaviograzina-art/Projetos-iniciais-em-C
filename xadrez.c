#include <stdio.h>
    int main(){

        int rainha = 1;
        int bispo = 1;

        for(int torre = 0; torre < 5; torre++) {
            printf("Torre movida para direita\n"); // Imprimindo a direção do movimento
        }

             printf("-------------------------------------------------------------\n");

        do
        {
            printf("Rainha movida para diagonal esquerda\n");
            rainha++;

        } while (rainha <= 8);

            printf("-------------------------------------------------------------\n");

        while (bispo <= 5) {
            printf("Bispo movido para diagonal direita\n");
            bispo++;
        }





        return 0;
    }