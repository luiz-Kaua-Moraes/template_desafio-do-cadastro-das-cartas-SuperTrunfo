#include <stdio.h>

int main()
{

    // Declaração das variáveis

    // Carta 1:
    char estado;
    char codigo_carta[5];
    char nome_cidade[30];
    unsigned long int populacao; //Mudança do tipo de variável para aceitar valores maiores
    int ponto_turistico;
    float area, pib;

    float desnsidade_populacional;
    float pib_PerCapta;

    float super_poder;

    // Carta 2:
    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[30];
    unsigned long int populacao2; //Mudança do tipo de variável para aceitar valores maiores
    int ponto_turistico2;
    float area2, pib2;

    float desnsidade_populacional2;
    float pib_PerCapta2;

    float super_poder2;

    //Variaveis para comparação entre as duas cartas

    int maior_populacao, mais_pontosTuristicos;
    float  maior_area, maior_pib, menor_densidadePopulacional, maior_pibPerCapta, maior_superPoder;


    // Faz o cadastro da carta 1 pedindo ao usuário as informações que ele deseja cadastrar

    printf("\n***** Cadastro da carta 1 *****\n\n");

    printf("Digite uma letra de 'A a H' para representar um dos estados:");
    scanf(" %c", &estado);

    printf("Digite a letra anterior seguida de um número de '01 a 04' ex:(A01, B01...) para representar o código do estado: ");
    scanf(" %s", codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade);

    printf("Digite a quantidade de habitantes: ");
    scanf(" %lu", &populacao);

    printf("Digite a area da cidade: ");
    scanf(" %f", &area);

    printf("Digite o PIB do da cidade: ");
    scanf(" %f", &pib);

    printf("Digite a quantidades de pontos turíscos: ");
    scanf(" %d", &ponto_turistico);


    
    // Faz o cadastro da carta 2 pedindo ao usuário as informações que ele deseja cadastrar

    printf("\n\n***** Cadastro da carta 2 *****\n\n");

    printf("Digite uma letra de 'A a H' para representar um dos estados: ");
    scanf(" %c", &estado2);

    printf("Digite a letra anterior seguida de um número de '01 a 04' ex:(A01, B01...) para representar o código do estado: ");
    scanf(" %s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a quantidade de habitantes: ");
    scanf(" %lu", &populacao2);

    printf("Digite a area da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o PIB do da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite a quantidades de pontos turíscos: ");
    scanf(" %d", &ponto_turistico2);



    //Cálculo da densidade pupulacionl e pib per Capita
    //carta1
    desnsidade_populacional = populacao/area;
    pib_PerCapta = pib/populacao;

    ///carta2
    desnsidade_populacional2 = populacao2/area2;
    pib_PerCapta2 = pib2/populacao2;

    //Cálculo do super poder
    //carta1
    super_poder =  populacao + area + pib + ponto_turistico + pib_PerCapta + (area/populacao);

    //carta2
    super_poder2 =  populacao2 + area2 + pib2 + ponto_turistico2 + pib_PerCapta2 + (area2/populacao2);
    
    
    // Mostra ao usuário os dados cadastrados da carta 1

    printf("Dados cadastrados com sucesso!\n\n");

    printf("Carta 1\n\n");

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", ponto_turistico);
    printf("Densidade Populacional: %.2f\n",desnsidade_populacional);
    printf("PIB per Capita: R$%.2f\n", pib_PerCapta);

    // Mostra ao usuário os dados cadastrados da carta 2
    printf("Carta 2\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f\n",desnsidade_populacional2);
    printf("PIB per Capita: R$%.2f\n\n", pib_PerCapta2);

    //Exibição de qual carta venceu, faz a comparação usando apenas operadores relcionais
    printf("Comparação das cartas\n\n");

    printf("Pupulação: Carta 1 venceu (%d)\n",populacao >= populacao2);
    printf("Área: Carta 2 venceu (%d)\n",area2 >= area);
    printf("PIB: Carta 1 venceu (%d)\n",pib >= pib2);
    printf("Pontos turísticos: Carta 2 venceu (%d)\n",ponto_turistico2 >= ponto_turistico);
    printf("Densidade populacional: Carta 2 venceu (%d)\n",desnsidade_populacional2 <= desnsidade_populacional);
    printf("PIB per Capta: Carta 1 venceu (%d)\n",pib_PerCapta >= pib_PerCapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n",super_poder >= super_poder2);

   

    return 0;
}