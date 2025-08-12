#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Definindo a struct Cidade
struct Cidade {
    char chaNomeCidade[50];
    unsigned long int intPopulacao;
    float floArea;
    float floPib;
    int intPontosTuristicos;
    int intDensidadePopulacional;
    float floPibPerCapita;
    float floSuperPoder;
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    struct Cidade cidadeA01;

    printf("Digite o nome da Cidade A01: ");
    fgets(cidadeA01.chaNomeCidade,50,stdin);
    printf("Digite a populacao da Cidade A01: ");
    scanf("%lu", &cidadeA01.intPopulacao);
    printf("Digite a área da Cidade A01: ");
    scanf("%f", &cidadeA01.floArea);
    printf("Digite o PIB da Cidade A01: ");
    scanf("%f", &cidadeA01.floPib);
    printf("Digite a quantidade de pontos turísticos da Cidade A01: ");
    scanf("%d", &cidadeA01.intPontosTuristicos);

    cidadeA01.intDensidadePopulacional = (int)(cidadeA01.intPopulacao / cidadeA01.floArea);
    cidadeA01.floPibPerCapita = (float) (cidadeA01.floPib / cidadeA01.intPopulacao);

    // calcula o super poder da cidade
    cidadeA01.floSuperPoder = (float) (cidadeA01.intPopulacao + cidadeA01.floArea + cidadeA01.floPib +
    cidadeA01.intDensidadePopulacional + cidadeA01.floPibPerCapita + cidadeA01.intPontosTuristicos); 

    // Limpa o buffer do teclado para evitar problemas com fgets após scanf
    getchar(); 

    struct Cidade cidadeB02;

    printf("Digite o nome da Cidade B02: ");
    fgets(cidadeB02.chaNomeCidade,50,stdin);
    printf("Digite a populacao da Cidade B02: ");
    scanf("%lu", &cidadeB02.intPopulacao);
    printf("Digite a área da Cidade B02: ");
    scanf("%f", &cidadeB02.floArea);
    printf("Digite o PIB da Cidade B02: ");
    scanf("%f", &cidadeB02.floPib);
    printf("Digite a quantidade de pontos turísticos da Cidade B02: ");
    scanf("%d", &cidadeB02.intPontosTuristicos);

    cidadeB02.intDensidadePopulacional =(int)(cidadeB02.intPopulacao / cidadeB02.floArea);
    cidadeB02.floPibPerCapita = (float) (cidadeB02.floPib / cidadeB02.intPopulacao);

    // calcula o super poder da cidade
    cidadeB02.floSuperPoder = (float) (cidadeB02.intPopulacao + cidadeB02.floArea + cidadeB02.floPib +
    cidadeB02.intDensidadePopulacional + cidadeB02.floPibPerCapita + cidadeB02.intPontosTuristicos);

    // Limpa o buffer do teclado para evitar problemas com fgets após scanf    
    getchar(); 

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n********* CIDADE A01 ****************\n");
    printf("Carta 1\n");
    printf("Estado A\n");
    printf("Código A01\n");
    printf("Nome: %s", cidadeA01.chaNomeCidade);
    printf("Populacao: %d\n", cidadeA01.intPopulacao);
    printf("Área: %.2f km²\n", cidadeA01.floArea);
    printf("PIB: %.2f reais\n", cidadeA01.floPib);
    printf("Pontos turísticos: %d\n", cidadeA01.intPontosTuristicos);
    printf("Densidade Populacional: %d habitantes por km²\n", cidadeA01.intDensidadePopulacional);
    printf("PIB Per Capita: %.2f reais\n", cidadeA01.floPibPerCapita);
    printf("Super Poder: %.2f\n", cidadeA01.floSuperPoder);

    printf("\n********* CIDADE B02 ****************\n");
    printf("Carta 2\n");
    printf("Estado B\n");
    printf("Código B02\n");    
    printf("Nome: %s", cidadeB02.chaNomeCidade);
    printf("Populacao: %d\n", cidadeB02.intPopulacao);
    printf("Área: %.2f km²\n", cidadeB02.floArea);
    printf("PIB: %.2f reais\n", cidadeB02.floPib);
    printf("Pontos turísticos: %d\n", cidadeB02.intPontosTuristicos);
    printf("Densidade Populacional: %d habitantes por km²\n", cidadeB02.intDensidadePopulacional);
    printf("PIB Per Capita: %.2f reais\n", cidadeB02.floPibPerCapita);
    printf("Super Poder: %.2f\n", cidadeB02.floSuperPoder);

    printf("\n********* COMPARAÇÃO ENTRE AS DUAS CIDADE ****************\n");
    printf("Populacao: %s\n", (cidadeA01.intPopulacao > cidadeB02.intPopulacao) ? "Cidade A01 VENCEU" : "Cidade B02 VENCEU");
    printf("Área: %s\n", (cidadeA01.floArea > cidadeB02.floArea) ? "Cidade A01 VENCEU" : "Cidade B02 VENCEU");
    printf("PIB: %s\n", (cidadeA01.floPib > cidadeB02.floPib) ? "Cidade A01 VENCEU" : "Cidade B02 VENCEU");
    printf("Pontos turísticos: %s\n", (cidadeA01.intPontosTuristicos > cidadeB02.intPontosTuristicos) ? "Cidade A01 VENCEU" : "Cidade B02 VENCEU");
    printf("Densidade Populacional: %s\n", (cidadeA01.intDensidadePopulacional > cidadeB02.intDensidadePopulacional) ? "Cidade B02 VENCEU" : "Cidade B02 VENCEU");
    printf("PIB Per Capita: %s\n", (cidadeA01.floPibPerCapita > cidadeB02.floPibPerCapita) ? "Cidade A01 VENCEU" : "Cidade B02 VENCEU");
    printf("Super Poder: %s\n", (cidadeA01.floSuperPoder > cidadeB02.floSuperPoder) ? "Cidade A01 VENCEU" : "Cidade B02 VENCEU");

    return 0;
}
