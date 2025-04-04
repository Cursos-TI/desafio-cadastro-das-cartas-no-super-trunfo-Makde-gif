#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração de variáveis
    char estado1[3], estado2[3], codigo1[4], codigo2[4], nome_da_cidade1[20], nome_da_cidade2[20];
    char primeiroAtributo, segundoAtributo;
    unsigned long int populacao1, populacao2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float area_em_km2_1, area_em_km2_2, PIB1, PIB2;
    float somaAtributos1, somaAtributos2;
    int opcao;

    printf("*** Bem Vindo ao Jogo ***\n");
     printf("1. Iniciar Jogo\n");
     printf("2. Ver regras\n");
     printf("3. Sair\n");
     printf("Escolha uma opção: ");
     scanf("%d", &opcao);

        switch(opcao)
        {
           case 1:
                printf("Iniciando o jogo...\n");
                break;
           case 2:
                printf("As regras são....\n");
                break;
           case 3:
                printf("Saindo do jogo...\n");
                break;
           default:
                printf("Opção invalida. Tente novamente. \n");
                break;     
            
        }

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

    // Escolha do primeiro atributo
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("A. População\n");
    printf("B. Área em km²\n");
    printf("C. PIB\n");
    printf("D. Número de pontos turísticos\n");
    printf("E. PIB per capita\n");
    printf("F. Densidade demográfica\n");
    printf("G. Super Poder\n");
    scanf(" %c", &primeiroAtributo);

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    printf("A. População\n");
    printf("B. Área em km²\n");
    printf("C. PIB\n");
    printf("D. Número de pontos turísticos\n");
    printf("E. PIB per capita\n");
    printf("F. Densidade demográfica\n");
    printf("G. Super Poder\n");
    scanf(" %c", &segundoAtributo);

    // Garantir que os atributos sejam diferentes)    
    if(primeiroAtributo == segundoAtributo) {
        printf("Atributos iguais. Por favor, escolha outro atributo.\n");
    }else{
        printf("Atributos novo ...\n");
    }

    // Comparação do primeiro atributo
    float valor1Atributo1, valor2Atributo1;
    switch (primeiroAtributo) {
        case 'A': 
        case 'a': 
        valor1Atributo1 = populacao1; valor2Atributo1 = populacao2; 
         break;
        case 'B': 
        case 'b': 
        valor1Atributo1 = area_em_km2_1; valor2Atributo1 = area_em_km2_2;
         break;
        case 'C': 
        case 'c': 
        valor1Atributo1 = PIB1; valor2Atributo1 = PIB2;
         break;
        case 'D':
        case 'd': 
        valor1Atributo1 = numero_de_pontos_turisticos1; valor2Atributo1 = numero_de_pontos_turisticos2;
         break;
        case 'E': 
        case 'e': 
        valor1Atributo1 = PIB_per_capita1; valor2Atributo1 = PIB_per_capita2; break;
        case 'F': 
        case 'f': 
        valor1Atributo1 = densidade_demografica1; valor2Atributo1 = densidade_demografica2;
         break;
        case 'G': 
        case 'g': 
        valor1Atributo1 = super_poder1; valor2Atributo1 = super_poder2;
         break;
    }

    // Comparação do segundo atributo
    float valor1Atributo2, valor2Atributo2;
    switch (segundoAtributo) {
        case 'A': 
        case 'a': valor1Atributo2 = populacao1; valor2Atributo2 = populacao2;
         break;
        case 'B': 
        case 'b': 
        valor1Atributo2 = area_em_km2_1; valor2Atributo2 = area_em_km2_2; break;
        case 'C': 
        case 'c': 
        valor1Atributo2 = PIB1; valor2Atributo2 = PIB2; break;
        case 'D': 
        case 'd': 
        valor1Atributo2 = numero_de_pontos_turisticos1; valor2Atributo2 = numero_de_pontos_turisticos2;
         break;
        case 'E': 
        case 'e': 
        valor1Atributo2 = PIB_per_capita1; valor2Atributo2 = PIB_per_capita2;
         break;
        case 'F': 
        case 'f': 
        valor1Atributo2 = densidade_demografica1; valor2Atributo2 = densidade_demografica2;
         break;
        case 'G': 
        case 'g': 
        valor1Atributo2 = super_poder1; valor2Atributo2 = super_poder2;
         break;
    }


    // Exibição dos resultados
printf("\n--- Resultado da Comparação ---\n");

// Comparação do primeiro atributo
printf("Primeiro atributo:\n");
printf("Carta A01 (%s): %.2f\n", nome_da_cidade1, valor1Atributo1);
printf("Carta A02 (%s): %.2f\n", nome_da_cidade2, valor2Atributo1);

if (valor1Atributo1 > valor2Atributo1) {
    printf("Vencedor no primeiro atributo: Carta A01 (%s)\n", nome_da_cidade1);
} else if (valor1Atributo1 < valor2Atributo1) {
    printf("Vencedor no primeiro atributo: Carta A02 (%s)\n", nome_da_cidade2);
} else {
    printf("Empate no primeiro atributo!\n");
}

// Comparação do segundo atributo
printf("\nSegundo atributo:\n");
printf("Carta A01 (%s): %.2f\n", nome_da_cidade1, valor1Atributo2);
printf("Carta A02 (%s): %.2f\n", nome_da_cidade2, valor2Atributo2);

if (valor1Atributo2 > valor2Atributo2) {
    printf("Vencedor no segundo atributo: Carta A01 (%s)\n", nome_da_cidade1);
} else if (valor1Atributo2 < valor2Atributo2) {
    printf("Vencedor no segundo atributo: Carta A02 (%s)\n", nome_da_cidade2);
} else {
    printf("Empate no segundo atributo!\n");
}


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

