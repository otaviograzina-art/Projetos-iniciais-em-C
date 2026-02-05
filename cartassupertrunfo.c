#include <stdio.h>

int main(){


    char estado;
    char codigo[10];        
    char nome[100];   
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

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

            printf("Digite o PIB em bilhões R$: ");
            scanf("%f", &pib);
          
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

       printf("-----------------------------\n");

  char estado2;
  char codigo2[10];
  char nome2[70];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

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
   
            printf("Digite o PIB em bilhões R$: ");
            scanf("%f", &pib2);
    
            printf("Digite a quantidade de pontos turísticos: ");
            scanf("%d", &pontosturisticos2);

        printf("\nCarta 2 Super Trunfo - Estados do Brasil\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", nome2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f Bilhões\n", pib2);
        printf("Pontos turísticos: %d", pontosturisticos2);   
    

}







     















    