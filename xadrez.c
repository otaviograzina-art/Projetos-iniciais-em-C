#include <stdio.h>

    void movimentotorre(int t){

        if (t < 5)
        {
            printf("Torre movida para esquerda\n");
            movimentotorre(t + 1);
        }
    }

    void movimentorainha(int r){

        if (r < 8)
        {
            printf("Rainha movida para diagonal esquerda\n");
            movimentorainha(r + 1);
        }
    }

    void movimentobispo(int b){

        if(b < 5)
        {
            printf("Bispo movido para diagonal direita\n");
            movimentobispo(b + 1);
        }

    }


    int main(){

        int rainha = 1;
        int bispo = 1;
        int cavalo = 1;

        for(int torre = 0; torre < 5; torre++) {
            printf("Torre movida para direita\n"); // Imprimindo a direção do movimento
        }

            printf("-------------------------------------------------------------\n");

             int torre = 0;
             movimentotorre(torre);

            printf("-------------------------------------------------------------\n");

        do

        {
            printf("Rainha movida para diagonal esquerda\n"); // Imprimindo a direção do movimento
            rainha++;

        } while (rainha <= 8);

            printf("-------------------------------------------------------------\n");

            int rainha1 = 0;
            movimentorainha(rainha);

            printf("-------------------------------------------------------------\n");


        while (bispo <= 5) {
            printf("Bispo movido para diagonal direita\n"); // Imprimindo a direção do movimento
            bispo++;
        }
            int bispo1 = 0;
            movimentobispo(bispo);

            printf("-------------------------------------------------------------\n");

        while(cavalo--) // Loop externo
        {
            for(int i = 0; i <= 1; i++) // Loop interno
            {
                printf("Cavalo movido para cima\n"); // Imprimindo a direção do movimento
            }
                printf("Cavalo movido para direita\n"); // Imprimindo a direção do movimento
        }
            printf("-------------------------------------------------------------\n");

        for(cavalo = 2; cavalo <= 2; cavalo++) // Loop externo
        {
            for(int j = 1; j <= cavalo; j++) // Loop interno
            {
                printf("Cavalo movido para baixo\n"); // Imprimindo a direção do movimento
            }
                printf("Cavalo movido para esquerda\n"); // Imprimindo a direção do movimento
        }

        return 0;
    }