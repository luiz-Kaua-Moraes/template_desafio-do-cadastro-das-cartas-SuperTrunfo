#include <stdio.h>

int main()
{

    // Declaração das variáveis

    // Carta 1:
    char estado;
    char codigo_carta[5];
    char nome_cidade[30];
    int populacao, qntd_pontoTuristico; 
    float area, pib;
   

    float desnsidade_populacional;
    float pib_PerCapta;

    float super_poder;

    // Carta 2:
    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[30];
    int populacao2, qntd_pontoTuristico2;
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
    scanf(" %d", &populacao);

    printf("Digite a area da cidade: ");
    scanf(" %f", &area);

    printf("Digite o PIB do da cidade: ");
    scanf(" %f", &pib);

    printf("Digite a quantidades de pontos turíscos: ");
    scanf(" %d", &qntd_pontoTuristico);


    
    // Faz o cadastro da carta 2 pedindo ao usuário as informações que ele deseja cadastrar

    printf("\n\n***** Cadastro da carta 2 *****\n\n");

    printf("Digite uma letra de 'A a H' para representar um dos estados: ");
    scanf(" %c", &estado2);

    printf("Digite a letra anterior seguida de um número de '01 a 04' ex:(A01, B01...) para representar o código do estado: ");
    scanf(" %s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a quantidade de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o PIB do da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite a quantidades de pontos turíscos: ");
    scanf(" %d", &qntd_pontoTuristico2);



    //Cálculo da densidade pupulacionl e pib per Capita
    //carta1
    desnsidade_populacional = populacao/area;
    pib_PerCapta = pib/populacao;

    ///carta2
    desnsidade_populacional2 = populacao2/area2;
    pib_PerCapta2 = pib2/populacao2;

    //Cálculo do super poder
    //carta1
    super_poder =  populacao + area + pib + qntd_pontoTuristico + pib_PerCapta + (area/populacao);

    //carta2
    super_poder2 =  populacao2 + area2 + pib2 + qntd_pontoTuristico2 + pib_PerCapta2 + (area2/populacao2);
    
    
    // Mostra ao usuário os dados cadastrados da carta 1

    printf("Dados cadastrados com sucesso!\n\n");

    printf("Carta 1\n\n");

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", qntd_pontoTuristico);
    printf("Densidade Populacional: %.2f\n",desnsidade_populacional);
    printf("PIB per Capita: R$%.2f\n", pib_PerCapta);

    // Mostra ao usuário os dados cadastrados da carta 2
    printf("Carta 2\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", qntd_pontoTuristico2);
    printf("Densidade Populacional: %.2f\n",desnsidade_populacional2);
    printf("PIB per Capita: R$%.2f\n\n", pib_PerCapta2);

    //Comparacao dos atributos entre carta 1 e 2
    
    printf("Comparação de cartas\n\n"); 
    printf("Atributo: População\n\n");

    printf("Carta 1 - %s: %d\n", nome_cidade, populacao);
    printf("Carta 2 - %s: %d\n", nome_cidade2, populacao2);

    //Pupulação
    if(populacao >= populacao2)
    {
        printf("Carta 1 venceu!\n\n");
    }
    else
    {
        printf("Carta 2 venceu!\n\n");
    }

    printf("Atributo: Área\n\n");

    printf("Carta 1 - %s: %.2f\n", nome_cidade, area);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, area2);

    //Área
    if(area > area2)
    {
        printf("Carta 1 venceu!\n\n");
    }
    else
    {
        printf("Carta 2 venceu!\n\n");
    }

    printf("Atributo: PIB\n\n");

    printf("Carta 1 - %s: %.2f\n", nome_cidade, pib);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib2);

    //PIB
    if(pib > pib2)
    {
        printf("Carta 1 venceu!\n\n");
    }

    else
    {
        printf("Carta 2 venceu!\n\n");
    }

    printf("Atributo: Quantidade de pontos turísticos\n\n");

    printf("Carta 1 - %s: %d\n", nome_cidade, qntd_pontoTuristico);
    printf("Carta 2 - %s: %d\n", nome_cidade2, qntd_pontoTuristico2);

    // Quantidade de pontos turísticos
    if(qntd_pontoTuristico > qntd_pontoTuristico2)
    {
        printf("Carta 1 venceu!\n\n");
    } 

    else
    {
        printf("Carta 2 venceu!\n\n");
    }

     printf("Atributo: Desnidade populacional\n\n");

    printf("Carta 1 - %s: %.2f\n", nome_cidade, desnsidade_populacional);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, desnsidade_populacional2);

    //Densidade populacional
    if(desnsidade_populacional > desnsidade_populacional2)
    {
        printf("Carta 2 venceu!\n\n");
    }

    else
    {
        printf("Carta 1 venceu!\n\n");
    }

    printf("Atributo: Pib per Capta\n\n");

    printf("Carta 1 - %s: %.2f\n", nome_cidade, pib_PerCapta);
    printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib_PerCapta2);

    //PIB per Capta
    if(pib_PerCapta > pib_PerCapta2)
    {
        printf("Carta 1 venceu!\n\n");
    }

    else
    {
        printf("Carta 2 venceu!\n\n");
    }

    

    return 0;
}