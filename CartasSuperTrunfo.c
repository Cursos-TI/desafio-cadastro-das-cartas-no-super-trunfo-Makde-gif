#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração de variáveis
    char estado1[3], estado2[3], codigo1[4], codigo2[4], nome_da_cidade1[20], nome_da_cidade2[20];
    unsigned long int populacao1, populacao2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float area_em_km2_1, area_em_km2_2, PIB1, PIB2;

    // Entrada e saída para a primeira cidade
    printf("\n Carta A01 \n");
    printf("Código da carta: ");
    scanf("%3s", codigo1);
    printf("Estado: ");
    scanf("%2s", estado1);
    printf("Nome da cidade: ");
    scanf("%20s", nome_da_cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area_em_km2_1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);

    // Cálculos para a primeira cidade
    float PIB_per_capita1 = PIB1 / populacao1;
    float densidade_demografica1 = populacao1 / area_em_km2_1;
    float super_poder1 = populacao1 + area_em_km2_1 + PIB1 + numero_de_pontos_turisticos1 +
                         PIB_per_capita1 + (1 / densidade_demografica1);

    // Exibir informações da primeira cidade
    printf("\n Carta A01\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area_em_km2_1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("PIB per capita: %.2f\n", PIB_per_capita1);
    printf("Densidade demográfica: %.2f habitantes/km²\n", densidade_demografica1);



    // Entrada e saída para a segunda cidade
    printf("\n Carta A02\n");
    printf("Código da carta: ");
    scanf("%3s", codigo2);
    printf("Estado: ");
    scanf("%2s", estado2);
    printf("Nome da cidade: ");
    scanf("%20s", nome_da_cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area_em_km2_2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Cálculos para a segunda cidade
    float PIB_per_capita2 = PIB2 / populacao2;
    float densidade_demografica2 = populacao2 / area_em_km2_2;
    float super_poder2 = populacao2 + area_em_km2_2 + PIB2 + numero_de_pontos_turisticos2 +
                         PIB_per_capita2 + (1 / densidade_demografica2);

    // Exibir informações da segunda cidade
    printf("\n Carta A02\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area_em_km2_2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("PIB per capita: %.2f\n", PIB_per_capita2);
    printf("Densidade demográfica: %.2f habitantes/km²\n", densidade_demografica2);

    // Exibição e comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area_em_km2_1 > area_em_km2_2 ? 1 : 2, area_em_km2_1 > area_em_km2_2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1 : 2, numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_demografica1 < densidade_demografica2 ? 1 : 2, densidade_demografica1 < densidade_demografica2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", PIB_per_capita1 > PIB_per_capita2 ? 1 : 2, PIB_per_capita1 > PIB_per_capita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2 ? 1 : 0);





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

