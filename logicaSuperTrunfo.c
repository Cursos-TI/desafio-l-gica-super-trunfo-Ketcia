#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Declaração e Inicialização de Variáveis C1 (carta 1)
    char C1_estado;
    char C1_codigoCarta[4];
    char C1_nomeCidade[20];
    int C1_populacao = 0;

    float C1_area = 0.0;
    float C1_PIB = 0.0;
    float C1_pibPercapita = 0.0;
    float C1_densidadePopulacional = 0.0;

    //Declaração e Inicialização de Variáveis C2 (carta 2)
    char C2_estado;
    char C2_codigoCarta[4];
    char C2_nomeCidade[20];
    int C2_populacao = 0;
    float C2_area = 0.0;
    float C2_PIB = 0.0;
    float C2_pibPercapita = 0.0;
    float C2_densidadePopulacional = 0.0;

    

    // Cadastro da Carta 1:

    printf("== CADASTRE A PRIMEIRA CARTA == \n");

    printf("Digite o Estado: ");
    scanf("%c", &C1_estado);

    printf("Digite o Código da Carta: ");
    scanf(" %s", &C1_codigoCarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", &C1_nomeCidade);

    printf("Digite a População: ");
    scanf("%d", &C1_populacao);

    printf("Digite a Area em Km²: ");
    scanf("%f", &C1_area);

    printf("Digite o PIB: ");
    scanf("%f", &C1_PIB);


    printf("Carta cadastrada com sucesso!\n\n");

    // Cadastro da Carta 2:

    printf("== CADASTRE A SEGUNDA CARTA ==\n");

    printf("Digite o Estado: ");
    scanf(" %c", &C2_estado);

    printf("Digite o Código da Carta: ");
    scanf(" %s", &C2_codigoCarta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", &C2_nomeCidade);

    __fpurge(stdin);

    printf("Digite a População: ");
    scanf("%d", &C2_populacao);

    printf("Digite a Area em Km²: ");
    scanf("%f", &C2_area);

    printf("Digite o PIB: ");
    scanf("%f", &C2_PIB);

    printf("Carta cadastrada com sucesso! \n");

    // Calculos do Sistema (PIB per capita e densidade populacional):

    C1_pibPercapita = C1_PIB/C1_populacao;
    C1_densidadePopulacional = (float)C1_populacao/C1_area;
    

    C2_pibPercapita = C2_PIB/C2_populacao;
    C2_densidadePopulacional = (float)C2_populacao/C2_area;
    

    // Exibição dos Dados das Cartas:

    printf("\n== CARTAS CADASTRADAS ==\n");

    printf("Carta N°1:\n\n");

    printf("Estado: %c \n", C1_estado);
    printf("Código da carta: %s \n", C1_codigoCarta);
    printf("Nome da cidade: %s \n", C1_nomeCidade);
    printf("População : %d habitantes\n", C1_populacao);
    printf("Área em km²: %.2f KM²\n", C1_area);
    printf("Densidade Populacional: %.2f\n", C1_densidadePopulacional);
    printf("PIB: R$%.2f\n", C1_PIB);
    printf("PIB per capita: R$%.2f\n", C1_pibPercapita);


    printf("Carta N°2:\n\n");

    printf("Estado: %c \n", C2_estado);
    printf("Código da carta: %s \n", C2_codigoCarta);
    printf("Nome da cidade: %s \n", C2_nomeCidade);
    printf("População: %d habitantes\n", C2_populacao);
    printf("Área em km²: %.2f KM² \n", C2_area);
    printf("Densidade Populacional: %.2f  \n", C2_densidadePopulacional);
    printf("PIB: R$%.2f \n", C2_PIB);
    printf("PIB per capita: R$%.2f \n", C2_pibPercapita);

    printf("=== COMPARAÇÃO ===\n\n");

    printf("- População:\n");
    printf("Carta 1 - Estado: %c, Código: %s, População: %d\n", C1_estado, C1_codigoCarta, C1_populacao);
    printf("Carta 2 - Estado: %c, Código: %s, População: %d\n", C2_estado, C2_codigoCarta, C2_populacao);
    if(C1_populacao > C2_populacao){
        printf("Resultado: Carta 1 é a vencedora!\n\n");
    }else{
        printf("Resultado: Carta 2 é a vencedora!\n\n");
    }

    printf("- Area:\n");
    printf("Carta 1 - Estado: %c, Código: %s, Area: %.2f\n", C1_estado, C1_codigoCarta, C1_area);
    printf("Carta 2 - Estado: %c, Código: %s, Area: %.2f\n", C2_estado, C2_codigoCarta, C2_area);
    if(C1_area > C2_area){
        printf("Resultado: Carta 1 é a vencedora!\n\n");
    }else{
        printf("Resultado: Carta 2 é a vencedora!\n\n");
    }

    printf("- PIB:\n");
    printf("Carta 1 - Estado: %c, Código: %s, PIB: %.2f\n", C1_estado, C1_codigoCarta, C1_PIB);
    printf("Carta 2 - Estado: %c, Código: %s, PIB: %.2f\n", C2_estado, C2_codigoCarta, C2_PIB);
    if(C1_PIB > C2_PIB){
        printf("Resultado: Carta 1 é a vencedora!\n\n");
    }else{
        printf("Resultado: Carta 2 é a vencedora!\n\n");
    }

    printf("- Densidade Populacional:\n");
    printf("Carta 1 - Estado: %c, Código: %s, Densidade Populacional: %.2f\n", C1_estado, C1_codigoCarta, C1_densidadePopulacional);
    printf("Carta 2 - Estado: %c, Código: %s,  Densidade Populacional: %.2f\n", C2_estado, C2_codigoCarta, C1_densidadePopulacional);
    if(C1_densidadePopulacional < C2_densidadePopulacional){
        printf("Resultado: Carta 1 é a vencedora!\n\n");
    }else{
        printf("Resultado: Carta 2 é a vencedora!\n\n");
    }

    printf("- PIB per capita:\n");
    printf("Carta 1 - Estado: %c, Código: %s, PIB percapita: %.2f\n", C1_estado, C1_codigoCarta, C1_pibPercapita);
    printf("Carta 2 - Estado: %c, Código: %s, PIB percapita: %.2f\n", C2_estado, C2_codigoCarta, C2_pibPercapita);
    if(C1_pibPercapita > C2_pibPercapita){
        printf("Resultado: Carta 1 é a vencedora!\n\n");
    }else{
        printf("Resultado: Carta 2 é a vencedora!\n\n");
    }
    
    return 0;
}
