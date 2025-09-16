#include <stdio.h>
int main() {
    // carta 1 super trunfo
    char estado1, codigo1[20], cidade1[30];
    int populacao1, pontoturistico1;
    float pib1, area1, densidade1, Pibp1, superpoder1;

    // carta 2
    char estado2, codigo2[20], cidade2[30];
    int populacao2, pontoturistico2;
    float pib2, area2, densidade2, Pibp2, superpoder2;

    printf("Cadastro da Primeira Carta\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontoturistico1);
    // cálculo da densidade
    densidade1 = populacao1 / area1;
    // Pib per capita
    Pibp1 = (pib1 * 1000000000) / populacao1;
    // super poder
    superpoder1 = populacao1 + area1 + pib1 + (1 / densidade1);
    // cadastro carta 2
    printf("\nCadastro da Segunda Carta\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontoturistico2);
    // cálculo da densidade
    densidade2 = populacao2 / area2;
   // Pib per capita
    Pibp2 = (pib2 * 1000000000) / populacao2;
    //Super poder
    superpoder2 = populacao2 + area2 + pib2 + (1 / densidade2);
    // informações da carta
    printf("\n----- Carta 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (em km²): %.2f km²\n", area1);
    printf("PIB (em bilhões): %.2f Bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", Pibp1);
    printf("Super poder: %2.f ", superpoder1);

    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f Km²\n", area2);
    printf("PIB (em bilhões): %.2f Bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", Pibp2);
    printf("Super poder: %2.f\n", superpoder2);

    printf("-----------------------\n-COMPARAÇÃO DAS CARTAS-\n-----------------------\n");
    printf(" Agora veremos qual carta foi a grande vencedora!!!\n");

   if (populacao1 > populacao2){
    printf("População: carta 1 Ganhou!\n");
   } else if (populacao1 < populacao2) {
    printf("População: carta 2 Ganhou!\n");
   } else {
    printf("Empate!\n");
   }
    
   if (area1 > area2){
    printf(" Área: carta 1 Ganhou!\n");
   } else if (area1 < area2) {
    printf(" Área: carta 2 Ganhou!\n");
   } else {
    printf("Empate!\n");
   }
     
   if (pib1 > pib2){
    printf(" PIB: carta 1 Ganhou!\n");
   } else if (pib1 < pib2) {
    printf(" PIB: carta 2 Ganhou!\n");
   } else {
    printf("Empate!\n");
   }

     if (Pibp1 > Pibp2){
    printf(" PIB per Capita: carta 1 Ganhou!\n");
   } else if (Pibp1 < Pibp2) {
    printf(" PIB per Capita: carta 2 Ganhou!\n");
   } else {
    printf("Empate!\n");
   }

     if (densidade1 < densidade2){
    printf(" Densidade demografica: carta 1 Ganhou!\n");
   } else if (densidade1 > densidade2) {
    printf(" Densidade demografica: carta 2 Ganhou!\n");
   } else {
    printf("Empate!\n");
   }
 
     if (pontoturistico1 > pontoturistico2){
    printf(" Pontos turísticos: carta 1 Ganhou!\n");
   } else if (pontoturistico1 < pontoturistico2) {
    printf(" Pontos turísticos: carta 2 Ganhou!\n");
   } else {
    printf("Empate!\n");
   }

   if (superpoder1 > superpoder2){
    printf(" Super Poder: carta 1 Ganhou!\n");
   } else if (superpoder1 < superpoder2) {
    printf(" Super Poder: carta 2 Ganhou!\n");
   } else {
    printf("Empate!\n");
   }

    return 0;
}

