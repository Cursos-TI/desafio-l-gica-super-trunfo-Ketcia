#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas - Nivel Mestre
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Declaração e Inicialização de Variáveis C1 (carta 1)
    char C1_estado;
    char C1_codigoCarta[4];
    char C1_nomeCidade[20];

    int C1_populacao = 0;
    int C1_NpontoTuristico = 0;
    float C1_area = 0.0;
    float C1_PIB = 0.0;

    // Declaração e Inicialização de Variáveis C2 (carta 2)
    char C2_estado;
    char C2_codigoCarta[4];
    char C2_nomeCidade[20];
    int C2_populacao = 0;
    int C2_NpontoTuristico = 0;
    float C2_area = 0.0;
    float C2_PIB = 0.0;

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

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%f", &C1_NpontoTuristico);

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

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%f", &C2_NpontoTuristico);

    printf("Carta cadastrada com sucesso! \n");

    // Exibição dos Dados das Cartas:

    printf("\n== CARTAS CADASTRADAS ==\n");

    printf("Carta N°1:\n\n");

    printf("Estado: %c \n", C1_estado);
    printf("Código da carta: %s \n", C1_codigoCarta);
    printf("Nome da cidade: %s \n", C1_nomeCidade);
    printf("População : %d habitantes\n", C1_populacao);
    printf("Área em km²: %.2f KM²\n", C1_area);
    printf("PIB: R$%.2f\n", C1_PIB);
    printf("Carta N°2:\n\n");

    printf("Estado: %c \n", C2_estado);
    printf("Código da carta: %s \n", C2_codigoCarta);
    printf("Nome da cidade: %s \n", C2_nomeCidade);
    printf("População: %d habitantes\n", C2_populacao);
    printf("Área em km²: %.2f KM² \n", C2_area);
    printf("PIB: R$%.2f \n\n", C2_PIB);

    printf("=== COMPARAÇÃO ===\n\n");

    int atributo1 = 0;
    int atributo2 = 0;

    //__fpurge(stdin);

    printf("Escolha o 1º Atributo:\n");
    printf("1. População\n2. Area\n3. PIB\n4. Numero de Pontos Turisticos\n");
    printf("Atributo: ");
    scanf("%d", &atributo1);

    printf("\n\nEscolha o 2º Atributo:");
    printf("1. População\n2. Area\n3. PIB\n4. Numero de Pontos Turisticos\n");
    printf("Atributo: ");
    scanf("%d", &atributo2);

    printf("\n");

    if (atributo1 == atributo2){
        printf("Valor Invalido! Escolha atributos diferentes\n\n");

    }else{
        
        if ((atributo1 == 1 && atributo2 == 2) || (atributo1 == 2 && atributo2 == 1))
        {
            printf("- Populacao x Area\n");

            (C1_populacao + C1_area) > (C2_populacao + C2_area) ? printf("Resultado: Carta 1 é a vencedora!\n\n") : printf("Resultado: Carta 2 é a vencedora!\n\n");


        }else if ((atributo1 == 1 && atributo2 == 3) || (atributo1 == 3 && atributo2 == 1)){

            printf("- Populacao x PIB\n");

            (C1_populacao + C1_PIB) > (C2_populacao + C2_PIB) ? printf("Resultado: Carta 1 é a vencedora!\n\n") : printf("Resultado: Carta 2 é a vencedora!\n\n");

        }else if ((atributo1 == 1 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 1))
        {
            printf("- Populacao x Ponto Turistico\n");

            (C1_populacao + C1_NpontoTuristico) > (C2_populacao + C2_NpontoTuristico) ? printf("Resultado: Carta 1 é a vencedora!\n\n") : printf("Resultado: Carta 2 é a vencedora!\n\n");

        }else if((atributo1 == 2 && atributo2 == 3) || (atributo1 == 3 && atributo2 == 2)){
            
            
            printf("- Area x PIB\n");

            (C1_area + C1_PIB) > (C2_area + C2_PIB) ? printf("Resultado: Carta 1 é a vencedora!\n\n") : printf("Resultado: Carta 2 é a vencedora!\n\n");

        }else if((atributo1 == 2 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 2)){

            printf("- Area x Ponto Turistico\n");

            (C1_area + C1_NpontoTuristico) > (C2_area + C2_NpontoTuristico) ? printf("Resultado: Carta 1 é a vencedora!\n\n") : printf("Resultado: Carta 2 é a vencedora!\n\n");

        }else if((atributo1 == 3 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 3)){

            printf("- PIB x Ponto Turistico\n");

            (C1_NpontoTuristico + C1_PIB) > (C2_NpontoTuristico + C2_PIB) ? printf("Resultado: Carta 1 é a vencedora!\n\n") : printf("Resultado: Carta 2 é a vencedora!\n\n");
        }

    }


    return 0;
}
