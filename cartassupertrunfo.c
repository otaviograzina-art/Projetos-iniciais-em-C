#include <stdio.h>

int main(){


    char estado, estado2;
    char codigo[10], codigo2[10];        
    char nome[100], nome2[100];   
    unsigned long int populacao, populacao2;
    float area, area2, densidadepopu, densidadepopu2;
    float pib, pib2, pibpercapta, pibpercapta2;
    int pontosturisticos, pontosturisticos2, win1, win2 = 0;
    float superpoder, superpoder2;

            printf("Digite o estado da sua carta De A a H:");
            scanf(" %c", &estado);

            printf("Digite o código da sua carta, a letra do estado seguida de um número de 01 a 04 ");
            scanf("%s", codigo);

            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", nome);

            printf("Digite a população: ");
            scanf("%d", &populacao);
            
                

            printf("Digite a área em km²: ");
            scanf("%f", &area);

            densidadepopu = (float) populacao / area;

            printf("Digite o PIB em bilhões R$: ");
            scanf("%f", &pib);

            pibpercapta = (float) pib / populacao;

            while (getchar() != '\n'); 

            printf("Digite a quantidade de pontos turísticos: ");
            scanf("%d", &pontosturisticos);
            

        printf("\nCarta 1 Super Trunfo - Estados do Brasil\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade %s\n", nome);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: R$ %.2f Bilhões\n", pib);
        printf("Pontos turísticos: %d\n", pontosturisticos);
        printf("Densidade populacional: %.2f hab/km²\n", densidadepopu);
        printf("PIB per capta: %.2f reais\n", pibpercapta);
    
       printf("-----------------------------\n");

            printf("Digite o estado da sua carta De A a H:");
            scanf(" %c", &estado2);

            printf("Digite o código da sua carta, a letra do estado seguida de um número de 01 a 04 ");
            scanf("%s", codigo2);
    
            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", nome2);
    
            printf("Digite a população: ");
            scanf("%d", &populacao2);

            printf("Digite a área em km²: ");
            scanf("%f", &area2);
   
            densidadepopu2 = (float) populacao2 / area2;

            printf("Digite o PIB em bilhões R$: ");
            scanf("%f", &pib2);

            pibpercapta2 = (float) pib2 / populacao2;

            printf("Digite a quantidade de pontos turísticos: ");
            scanf("%d", &pontosturisticos2);


        printf("\nCarta 2 Super Trunfo - Estados do Brasil\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", nome2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f Bilhões\n", pib2);
        printf("Pontos turísticos: %d\n", pontosturisticos2);   
        printf("Densidade populacional: %.2f hab/km²\n", densidadepopu2);
        printf("PIB per capta: %.2f reais\n", pibpercapta2);

   

}







     















    