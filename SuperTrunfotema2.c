#include <stdio.h>

int main() {
    //variável jogador 1
    char estado[50], codigo[50], cidade[50];
    unsigned long int populacao;
    float area, pib, densidade, percapita;
    int turistico;
    float superpoder;

    int escolha; //variavel escolha de atribuição

    //variável jogador 2
    char estado2[50], codigo2[50], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, percapita2;
    int turistico2;
    float superpoder2;

    int opcao; //variável menu inicial

    //menu inicial
    printf("--- Menu Inicial ---\n\n");
    printf("1. Iniciar\n");
    printf("2. Regras do jogo\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("Iniciando jogo...\n\n");
        break;

        case 2:
        printf("--Regras do jogo--\n");
        printf("1. Este é um jogo de batalha de cartas.\n");
        printf("2. Você deverá cadastrar uma carta com informações de um estado desejado.\n");
        printf("3. O jogador deverá escolher qual atributo usar para a batalha\n");
        printf("4. Após a escolha, uma comparação vai ser feita entre a escolha do jogador 1 e jogador 2\n");
        printf("5. Em todos o maior vence, exceto densidade populacional, no qual o menor vence\n\n");
        break;


        default: 
        printf("Opção inválida, tente novamente.\n");
        break;

    } 



    // Cadastro carta 01
    printf("\n--Cadastro da carta 01:--\n\n");

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico);

    densidade = populacao / area;
    percapita = (pib * 1000000000.0) / populacao;
    superpoder = populacao + area + (pib * 1000000000.0) + percapita + turistico + (1.0 / densidade);

    // Cadastro carta 02
    printf("\n--Cadastro da carta 02:--\n\n");

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000.0) / populacao2;
    superpoder2 = populacao2 + area2 + (pib2 * 1000000000.0) + percapita2 + turistico2 + (1.0 / densidade2);

    // Resultado carta 01
    printf("\nResultado carta 01:\n\n");
    printf("Estado carta 01: %s\n", estado);
    printf("Código carta 01: %s\n", codigo);
    printf("Cidade carta 01: %s\n", cidade);
    printf("Habitantes carta 01: %d\n", populacao);
    printf("Área carta 01: %.1f km²\n", area);
    printf("PIB carta 01: %.2f\n", pib);
    printf("Pontos turísticos carta 01: %d\n", turistico);
    printf("A Densidade Populacional da carta 01 é: %.2f hab/km²\n", densidade);
    printf("O PIB per Capita da carta 01 é: %.2f reais\n\n", percapita);

    // Resultado carta 02
    printf("\nResultado carta 02:\n\n");
    printf("Estado carta 02: %s\n", estado2);
    printf("Código carta 02: %s\n", codigo2);
    printf("Cidade carta 02: %s\n", cidade2);
    printf("Habitantes carta 02: %d\n", populacao2);
    printf("Área carta 02: %.1f km²\n", area2);
    printf("PIB carta 02: %.2f\n", pib2);
    printf("Pontos turísticos carta 02: %d\n", turistico2);
    printf("A Densidade Populacional da carta 02 é: %.2f hab/km²\n", densidade2);
    printf("O PIB per Capita da carta 02 é: %.2f reais\n\n", percapita2);

    //batalha
    printf("\n--- BATALHA ---\n\n");

    //menu escolha atribuição batalha
    printf("--- Escolha a atribuição desejada para a batalha: ---\n\n");
    printf("1. População\n");
    printf("2. Área.\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade Populacional\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha); 

    switch (escolha) {
        case 1:
        printf("Batalha atribuição população\n");
        break;

        case 2:
        printf("Batalha atribuição área\n");
        break;

        case 3:
        printf("Batalha atribuição PIB\n");
        break;

        case 4:
        printf("Batalha atribuição pontos turísticos\n");
        break;

        case 5:
        printf("Batalha atribuição PIB per capita\n");
        break;

        case 6:
        printf("Batalha atribuição densidade populacional\n");
        break;

        case 7:
        printf("Batalha atribuição Super Poder\n");
        break;

        default:
        printf("Opção inválida, tente novamente\n");
        break;
    }
     
        if ((populacao == populacao2) || (area == area2) || (pib == pib2) || 
           (turistico == turistico2) || (percapita == percapita2) || (superpoder2 == superpoder) || 
           (densidade == densidade2)){
            printf("-- O jogo empatou! --\n");
        } else if ((populacao > populacao2) ||
                   (area > area2) || (pib > pib2) || (turistico > turistico2) || (percapita > percapita2) ||
                   (superpoder > superpoder2) || (densidade < densidade2))
          {  printf("--Jogador 1 ganhou!--"); 
           } else { 
            printf("--Jogador 2 ganhou!--");
        }

    

    
    return 0;
}
