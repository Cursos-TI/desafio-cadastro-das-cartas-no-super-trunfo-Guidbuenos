#include <stdio.h>
int main() {
    // carta 1 super trunfo
    char estado1, codigo1[20], cidade1[30];
    int populacao1, pontoturistico1, opcao1, opcao2;
    float pib1, area1, densidade1, Pibp1, superpoder1;

    // carta 2
    char estado2, codigo2[20], cidade2[30];
    int populacao2, pontoturistico2, opcao;
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
    superpoder1 = populacao1 + area1 + pib1 + (1.0 / densidade1);
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
    superpoder2 = populacao2 + area2 + pib2 + (1.0 / densidade2);
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
    printf("Super poder: %.2f ", superpoder1);

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
    printf("Super poder: %.2f\n", superpoder2);

    printf("-----------------------\n-COMPARAÇÃO DAS CARTAS-\n-----------------------\n");
    printf(" Agora veremos qual carta foi a grande vencedora!!!\n");

     printf("\nEscolha os atributos para comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - PIB per Capita\n");
  printf("5 - Densidade Demográfica\n");
  printf("6 - Pontos Turísticos\n");
  printf("7 - Super Poder\n");
  printf("Digite seu primeiro atributo: ");
  scanf("%d", &opcao1);
  printf("Escolha seu segundo atributo: ");
  scanf("%d", &opcao2);
   // Primeiro atributo 
  switch(opcao1) {
    case 1: // população
    printf("População -> Carta 1: %s %d hab | Carta 2: %s %d hab\n", cidade1, populacao1, cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %d habitantes\n", populacao1 - populacao2);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %d habitantes\n", populacao2 - populacao1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 2: // área
    printf("Área -> Carta 1: %s %.2f km² | Carta 2: %s %.2f km²\n", cidade1, area1, cidade2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f km²\n", area1 - area2);
    } else if (area1 < area2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f km²\n", area2 - area1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 3: // PIB
    printf("PIB -> Carta 1: %s %.2f Bi | Carta 2: %s %.2f Bi\n", cidade1, pib1, cidade2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f Bi\n", pib1 - pib2);
    } else if (pib1 < pib2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f Bi\n", pib2 - pib1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 4: // PIB per capita
    printf("PIB per Capita -> Carta 1: %s %.2f | Carta 2: %s %.2f\n", cidade1, Pibp1, cidade2, Pibp2);
    if (Pibp1 > Pibp2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f\n", Pibp1 - Pibp2);
    } else if (Pibp1 < Pibp2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f\n", Pibp2 - Pibp1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 5: // densidade (menor vence)
    printf("Densidade -> Carta 1: %s %.2f hab/km² | Carta 2: %s %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f hab/km²\n", densidade2 - densidade1);
    } else if (densidade1 > densidade2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f hab/km²\n", densidade1 - densidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 6: // pontos turísticos
    printf("Pontos Turísticos -> Carta 1: %s %d | Carta 2: %s %d\n", cidade1, pontoturistico1, cidade2, pontoturistico2);
    if (pontoturistico1 > pontoturistico2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %d pontos\n", pontoturistico1 - pontoturistico2);
    } else if (pontoturistico1 < pontoturistico2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %d pontos\n", pontoturistico2 - pontoturistico1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 7: // super poder
    printf("Super Poder -> Carta 1: %s %.2f | Carta 2: %s %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
    if (superpoder1 > superpoder2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f\n", superpoder1 - superpoder2);
    } else if (superpoder1 < superpoder2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f\n", superpoder2 - superpoder1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
    default:
        printf("Opção inválida!\n");
}
// Segundo Atributo
 switch(opcao2) {
    case 1: // população
    printf("População -> Carta 1: %s %d hab | Carta 2: %s %d hab\n", cidade1, populacao1, cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %d habitantes\n", populacao1 - populacao2);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %d habitantes\n", populacao2 - populacao1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 2: // área
    printf("Área -> Carta 1: %s %.2f km² | Carta 2: %s %.2f km²\n", cidade1, area1, cidade2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f km²\n", area1 - area2);
    } else if (area1 < area2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f km²\n", area2 - area1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 3: // PIB
    printf("PIB -> Carta 1: %s %.2f Bi | Carta 2: %s %.2f Bi\n", cidade1, pib1, cidade2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f Bi\n", pib1 - pib2);
    } else if (pib1 < pib2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f Bi\n", pib2 - pib1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 4: // PIB per capita
    printf("PIB per Capita -> Carta 1: %s %.2f | Carta 2: %s %.2f\n", cidade1, Pibp1, cidade2, Pibp2);
    if (Pibp1 > Pibp2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f\n", Pibp1 - Pibp2);
    } else if (Pibp1 < Pibp2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f\n", Pibp2 - Pibp1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 5: // densidade (menor vence)
    printf("Densidade -> Carta 1: %s %.2f hab/km² | Carta 2: %s %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f hab/km²\n", densidade2 - densidade1);
    } else if (densidade1 > densidade2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f hab/km²\n", densidade1 - densidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 6: // pontos turísticos
    printf("Pontos Turísticos -> Carta 1: %s %d | Carta 2: %s %d\n", cidade1, pontoturistico1, cidade2, pontoturistico2);
    if (pontoturistico1 > pontoturistico2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %d pontos\n", pontoturistico1 - pontoturistico2);
    } else if (pontoturistico1 < pontoturistico2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %d pontos\n", pontoturistico2 - pontoturistico1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;

case 7: // super poder
    printf("Super Poder -> Carta 1: %s %.2f | Carta 2: %s %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
    if (superpoder1 > superpoder2) {
        printf("Resultado: Carta 1 ganhou! Diferença: %.2f\n", superpoder1 - superpoder2);
    } else if (superpoder1 < superpoder2) {
        printf("Resultado: Carta 2 ganhou! Diferença: %.2f\n", superpoder2 - superpoder1);
    } else {
        printf("Resultado: Empate!\n");
    }
    break;
    default:
        printf("Opção inválida!\n");
}
 



return 0;
}

