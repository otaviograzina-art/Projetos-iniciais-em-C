#include <stdio.h>
    int main(){

        int rainha = 1;
        int bispo = 1;
        int cavalo = 1;

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
             printf("-------------------------------------------------------------\n");

        while(cavalo--)
        {
            for(int i = 0; i <= 1; i++)
            {
                printf("Cavalo movido para cima\n");
            }
                printf("Cavalo movido para direita\n");
        }
            printf("-------------------------------------------------------------\n");

        for(cavalo = 2; cavalo <= 2; cavalo++)
        {
            for(int j = 1; j <= cavalo; j++)
            {
                printf("Cavalo movido para baixo\n");
            }
                printf("Cavalo movido para esquerda\n");
        }


        return 0;
    }