#include <stdio.h>

int main(){


    char estado, estado2;
    char codigo[10], codigo2[10];
    char nome[100], nome2[100];
    long long int populacao, populacao2;
    float area, area2, densidadepopu, densidadepopu2;
    float pib, pib2, pibpercapta, pibpercapta2;
    long long int pontosturisticos, pontosturisticos2;
    int escolha;

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

            densidadepopu = populacao / area;

            printf("Digite o PIB em bilhões R$: ");
            scanf("%f", &pib);

            pibpercapta = pib / populacao;

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

        float inversodensidadepopu = 1.0f / densidadepopu;  
        float superpoder = (float)populacao + area + pib + pibpercapta + inversodensidadepopu + (float)pontosturisticos;

        printf("Super poder: %2f\n", superpoder);

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

        float inversodensidadepopu2 = 1.0f / densidadepopu2;  
        float superpoder2 = (float)populacao2 + area2 + pib2 + pibpercapta2 + inversodensidadepopu2 + (float)pontosturisticos2;

        printf("Super poder: %4f\n", superpoder2);

        printf("-----------------------------\n");

        printf("%s: População: %d\n", nome, populacao);
        printf("%s: População: %d\n", nome2, populacao2);

        if((populacao > populacao2)){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else
            printf("Carta 2 (%s) venceu!\n", nome2);

        printf("-----------------------------\n");    

        printf("%s: Area: %f\n", nome, area);
        printf("%s: Area: %f\n", nome2, area2);

        if(( area > area2)){
            printf("Carta 1: (%s) venceu!\n", nome);
        }else
            printf("Carta 2: (%s) venceu!\n", nome2);

        printf("-----------------------------\n");    

        printf("%s: Pontos turisticos: %d\n", nome, pontosturisticos);
        printf("%s: Pontos turisticos: %d\n", nome2, pontosturisticos2);

        if(( pontosturisticos > pontosturisticos2)){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else
            printf("Carta 2 (%s) venceu!\n", nome2);

        printf("-----------------------------\n");    

        printf("%s: PIB: %f\n", nome, pib);
        printf("%s: PIB: %f\n", nome2, pib2);

        if(( pib > pib2)){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else
            printf("Carta 2 (%s) venceu!\n", nome2);

        printf("-----------------------------\n");
        
        printf("%s: Densidade populacional: %f\n", nome, densidadepopu);
        printf("%s: Densidade populacional: %f\n", nome2, densidadepopu2);

        if(( densidadepopu < densidadepopu2)){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else
            printf("Carta 2 (%s) venceu!\n", nome2);

        printf("-----------------------------\n");    
        
        printf("%s: PIB per capta: %f\n", nome, pibpercapta);
        printf("%s: PIB per capta: %f\n", nome2, pibpercapta2);

        if(( pibpercapta < pibpercapta2)){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else
            printf("Carta 2 (%s) venceu!\n", nome2);

        printf("-----------------------------\n");    

        printf("%s: Super poder: %3f\n", nome, superpoder);
        printf("%s: Super poder: %3f\n", nome2, superpoder2);

        if(( superpoder > superpoder2)){
            printf("Carta 1 (%s) venceu!\n", nome);
        }else
            printf("Carta 2 (%s) venceu!\n", nome2);
        
        printf("-----------------------------\n"); 

        printf("Escolha um atributo para comparar!\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Pib\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade Populacional\n");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("%s - %s\n", nome, nome2);
            printf("%ld - %ld\n", populacao, populacao2);
            if  (populacao > populacao2) {
            printf("%s Venceu!\n", nome);
        }   else {
            printf("%s Venceu!\n", nome2);
        }
    
    }   else if (escolha == 2) {
            printf("%s - %s\n", nome, nome2);
            printf("%f - %f\n", area, area2);
            if  (area > area2) {
            printf("%s Venceu!\n", nome);
        }   else {
            printf("%s Venceu!\n", nome2);
        }
    }
        else if (escolha == 3) {
            printf("%s - %s\n", nome, nome2);
            printf("%f - %f\n", pib, pib);
            if  (pib > pib2) {
            printf("%s Venceu!\n", nome);
        }   else {
            printf("%s Venceu!\n", nome2);
        }
    }
        else if (escolha == 4) {
            printf("%s - %s\n", nome, nome2);
            printf("%ld - %ld\n", pontosturisticos, pontosturisticos2);
            if  (pontosturisticos > pontosturisticos2) {
            printf("%s Venceu!\n", nome);
        }   else {
            printf("%s Venceu!\n", nome2);
        }
    }
        else if (escolha == 5) {
            printf("%s - %s\n", nome, nome2);
            printf("%f - %f\n", densidadepopu, densidadepopu2);
            if  (densidadepopu < densidadepopu2) {
            printf("%s Venceu!\n", nome);
        }   else {
            printf("%s Venceu!\n", nome2);
        }
    }

}