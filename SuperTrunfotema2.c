#include <stdio.h>

int main() {
    //variável jogador 1
    char estado[50], codigo[50], cidade[50];
    unsigned long int populacao;
    float area, pib, densidade, percapita;
    int turistico;
    float superpoder;

    int escolha, escolha2; //variavel escolha de atribuição

    //variável jogador 2
    char estado2[50], codigo2[50], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, percapita2;
    int turistico2;
    float superpoder2;

    int opcao; //variável menu inicial

    //menu inicial
    do {
    printf("\n🌸🌸 BEM-VINDO AO JOGO DOS ESTADOS MÁGICOS 🌸🌸\n");
    printf("O que você gostaria de fazer agora?\n\n");
    printf("1. Iniciar uma nova aventura\n");
    printf("2. Ver as regras do jogo\n");
    printf("💌 Escolha com o coração: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("\n🎮✨ Iniciando o jogo encantado... Que a magia comece! ✨🎮\n\n");
        break;

        case 2:
        
        printf("\n📜✨ REGRINHAS ENCANTADAS DO JOGO ✨📜\n\n");
        printf("🃏 1. Este é um jogo de batalha de cartas mágicas dos estados brasileiros!\n");
        printf("📝 2. Você vai cadastrar uma cartinha com informações de um estado querido.\n");
        printf("🔍 3. Escolha um ou mais atributos encantados para batalhar!\n");
        printf("⚖️ 4. A comparação será feita entre as cartinhas dos dois jogadores.\n");
        printf("🏆 5. Quem tiver o atributo *mais forte* vence... 🥇\n");
        printf("☁️ 6. *Exceto* no caso da densidade populacional — onde o **menor** valor ganha, pois paz e espaço valem muito! 🌿💗\n");
        printf("\n🌈 Boa sorte, herói dos estados! 🌟\n\n");
        break;
        

        default: 
         printf("\n❌ Ops! Opção inválida...\n");
        printf("🔁 Tente novamente e escolha um número fofinho! 💖\n\n");
        break;
    }

    } while (opcao != 1);

    



    // Cadastro carta 01
    printf("\n🌈 Vamos criar sua cartinha mágica! 🌈\n");

    printf("\n-- Carta 01: --\n\n");

    printf("📍 Nome do estado encantado: ");
    scanf("%s", estado);

    printf("🔖 Código da carta (seja criativo!): ");
    scanf("%s", codigo);

    printf("🌆 Nome da cidade principal: ");
    scanf("%s", cidade);

    printf("👨‍👩‍👧 Quantas pessoinhas vivem lá? ");
    scanf("%lu", &populacao);

    printf("📏 Qual a área em km² desse lugar mágico? ");;
    scanf("%f", &area);

    printf("💰 PIB (o tesouro do estado): ");;
    scanf("%f", &pib);

    printf("🌄 Quantos pontos turísticos encantam os visitantes? ");
    scanf("%d", &turistico);

    densidade = populacao / area;
    percapita = (pib * 1000000000.0) / populacao;
    superpoder = populacao + area + (pib * 1000000000.0) + percapita + turistico + (1.0 / densidade);

    // Cadastro carta 02
    printf("\n--Cadastro da carta 02:--\n\n");

    printf("📍 Nome do estado encantado: ");
    scanf("%s", estado2);

    printf("🔖 Código da carta (seja criativo!): ");
    scanf("%s", codigo2);

    printf("🌆 Nome da cidade principal: ");
    scanf("%s", cidade2);

    printf("👨‍👩‍👧 Quantas pessoinhas vivem lá? ");
    scanf("%lu", &populacao2);

    printf("📏 Qual a área em km² desse lugar mágico? ");
    scanf("%f", &area2);

    printf("💰 PIB (o tesouro do estado): ");
    scanf("%f", &pib2);

    printf("🌄 Quantos pontos turísticos encantam os visitantes? ");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000.0) / populacao2;
    superpoder2 = populacao2 + area2 + (pib2 * 1000000000.0) + percapita2 + turistico2 + (1.0 / densidade2);

    // Resultado carta 01
    printf("\n🌟✨ Resultado da Cartinha 01 ✨🌟\n\n");
    printf("📍 Estado:            %s\n", estado);
    printf("🆔 Código da Carta:   %s\n", codigo);
    printf("🏙️  Cidade:           %s\n", cidade);
    printf("👥 Habitantes:        %lu\n", populacao);
    printf("🌎 Área:              %.1f km²\n", area);
    printf("💰 PIB:               %.2f bilhões\n", pib);
    printf("🏖️  Pontos Turísticos: %d\n", turistico);
    printf("📏 Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("💸 PIB per Capita:    %.2f reais\n", percapita);
    printf("🎇-----------------------------🎇\n");

    // Resultado carta 02
    printf("\n🌟✨ Resultado da Cartinha 02 ✨🌟\n\n");
    printf("📍 Estado:            %s\n", estado2);
    printf("🆔 Código da Carta:   %s\n", codigo2);
    printf("🏙️  Cidade:           %s\n", cidade2);
    printf("👥 Habitantes:        %lu\n", populacao2);
    printf("🌎 Área:              %.1f km²\n", area2);
    printf("💰 PIB:               %.2f bilhões\n", pib2);
    printf("🏖️  Pontos Turísticos: %d\n", turistico2);
    printf("📏 Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("💸 PIB per Capita:    %.2f reais\n", percapita2);
    printf("🎇-----------------------------🎇\n");

    //batalha
    printf("\n⚔️✨ Hora da batalha dos atributos mágicos! ✨⚔️\n");

    //menu escolha atribuição batalha
    do {
    printf("Escolha com sabedoria o primeiro atributo para lutar: \n\n", escolha);
    printf("1. População🧍\n");
    printf("2. Área 🌐\n");
    printf("3. PIB 💵\n");
    printf("4. Pontos Turísticos 🌅\n");
    printf("5. PIB per capita 🧮\n");
    printf("6. Densidade Populacional 👥/📏 (MENOR vence!)\n");
    printf("7. Superpoder Supremo 🌟\n");
    printf("Digite o número do atributo desejado: ");
    scanf("%d", &escolha);  

    if (escolha < 1 || escolha > 7) {
        printf("Atributo inválido! Por favor, escolha um número de 1 a 7.\n");
    }
  } while (escolha < 1 || escolha > 7);

    do {
    printf("Escolha com sabedoria o segundo atributo para lutar (diferente do primeiro [%d]): \n", escolha2);
    if (escolha != 1) printf("1. População🧍\n");
    if (escolha != 2) printf("2. Área 🌐\n");
    if (escolha != 3) printf("3. PIB 💵\n");
    if (escolha != 4) printf("4. Pontos Turísticos 🌅\n");
    if (escolha != 5) printf("5. PIB per capita 🧮\n");
    if (escolha != 6) printf("6. Densidade Populacional 👥/📏 (MENOR vence!)\n");
    if (escolha != 7) printf("7. Superpoder Supremo 🌟\n");
    printf("Digite o número desejado: ");
    scanf("%d", &escolha2);
    if (escolha == escolha2) {
        printf("Você já escolheu esse atributo! Escolha um diferente.\n");
    }
    } while (escolha2 == escolha || escolha2 < 1 || escolha2 > 7);

        //declarção dos valores dos atributos

        float valor1_c1 = 0, valor2_c1 = 0, valor1_c2 = 0, valor2_c2 = 0;

        //obter valores do primeiro atributo
        switch (escolha) {
            case 1:
            valor1_c1 = populacao;
            valor1_c2 = populacao2;
            break;

            case 2:
            valor1_c1 = area;
            valor1_c2 = area2;
            break;

            case 3:
            valor1_c1 = pib;
            valor1_c2 = pib2;
            break;

            case 4:
            valor1_c1 = turistico;
            valor1_c2 = turistico2;
            break;

            case 5:
            valor1_c1 = percapita;
            valor1_c2 = percapita2;
            break;

            case 6:
            valor1_c1 = densidade;
            valor1_c2= densidade2;
            break;

            case 7: 
            valor1_c1 = superpoder;
            valor1_c2 = superpoder2;
            break;
        }
        
    // Obter valores do segundo atributo
        switch (escolha2) {
            case 1:
            valor2_c1 = populacao;
            valor2_c2 = populacao2;
            break;

            case 2:
            valor2_c1 = area;
            valor2_c2 = area2;
            break;

            case 3:
            valor2_c1 = pib;
            valor2_c2 = pib2;
            break;

            case 4:
            valor2_c1 = turistico;
            valor2_c2 = turistico2;
            break;

            case 5:
            valor2_c1 = percapita;
            valor2_c2 = percapita2;
            break;

            case 6:
            valor2_c1 = densidade;
            valor2_c2 = densidade2;
            break;

            case 7:
            valor2_c1 = superpoder;
            valor2_c2 = superpoder2;
            break;
    }

    //comparação individual com regra da densidade
    int vitorias_c1 = 0, vitorias_c2 = 0;

    printf("\n-- Resultado da Batalha --\n\n");

    //comparação do primeiro atributo
    printf("Comparando atributo %d...\n", escolha);
    if (escolha == 6) //menor vence
        if (valor1_c1 < valor1_c2) {
            printf("💖 Carta 1 vence (menor densidade = mais paz!)\n");
            vitorias_c1++;
        } else if (valor1_c2 < valor1_c1) {
            printf("💖 Carta 2 vence (menor densidade = mais sossego!)\n");
            vitorias_c2++;
        } else {
            printf("🤝 Empate fofo! Ambas são igualmente encantadoras!\n");
        } else {
            if (valor1_c1 > valor1_c2) {
                printf("🎉 Carta 1 arrasou no atributo escolhido!\n");
                vitorias_c1++;
            } else if (valor1_c2 > valor1_c1) {
                printf("🎉 Carta 2 brilhou mais nesse poder!\n");
                vitorias_c2++;
            }  
        }
        //comparação segundo atributo
        printf("Comparando atributo %d...\n", escolha2);
    if (escolha2 == 6) //menor vence
        if (valor2_c1 < valor2_c2) {
            printf("💖 Carta 1 vence (menor densidade = mais paz!)\n");
            vitorias_c1++;
        } else if (valor2_c2 < valor2_c1) {
            printf("💖 Carta 2 vence (menor densidade = mais sossego!)\n");
            vitorias_c2++;
        } else {
            printf("🌈 Empate mágico!\n");
        } else {
            if (valor2_c1 > valor2_c2) {
                printf("🎉 Carta 1 arrasou no atributo escolhido!\n");
                vitorias_c1++;
            } else if (valor2_c2 > valor2_c1) {
                printf("🎉 Carta 2 brilhou mais nesse poder!\n");
                vitorias_c2++;
            } else {
                printf("🌈 Empate mágico!\n");
            }
        }     
        
        // soma dos valores
        float soma_c1 = valor1_c1 + valor2_c1;
        float soma_c2 = valor1_c2 + valor2_c2;

        printf("📊 Somando os atributos escolhidos...\n");
        printf("🃏 Carta 1: %.2f pontos mágicos\n", soma_c1);
        printf("🃏 Carta 2: %.2f pontos mágicos\n", soma_c2);

        //resultado final com base na soma 
        printf("\n💫✨ Resultado Final ✨💫\n");
        if (soma_c1 > soma_c2) {
            printf("🏆 A Carta 1 é a campeã encantada! Parabéns! 🎊\n");
        } else if (soma_c2 > soma_c1) {
            printf("🏆 A Carta 2 brilha com força e venceu! 💖\n");

        } else {
            printf("🌟 Empate mágico! Ambas são incríveis! 🌟\n");
        }
    

    
    return 0;
}
