#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado[3];
    char codigo[4];
    char nome_da_cidade[20];
    int populacao = 11895578 ;
    float area_em_km2 = 1.52111;
    float PIB = 7146;
    int numero_de_pontos_turisticos = 10;

    printf("Código da carta: ");;
    scanf("%3s", codigo);
    printf("Código: %s\n", codigo);

    printf("Estado: ");
    scanf("%2s", estado);
    printf("Estado: %s\n", estado);

    printf("Nome da cidade: ");
    scanf("%20s", nome_da_cidade);
    printf("Cidade: %s\n", nome_da_cidade);

    printf("População: ");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Área em km²: ");
    scanf("%f", &area_em_km2);
    printf("Área: %.2f km²\n", area_em_km2);

    printf("PIB: ");
    scanf("%f", &PIB);
    printf("PIB: %.2f\n", PIB);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos);

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
