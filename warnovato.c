#include <stdio.h>
#include <string.h>

int main (){
    struct Territorio {
        char nome[30];
        char cor[20];
        int tropas;
    };

    printf("===== CADASTRO DE TERRITORIOS =====\n");
    struct Territorio territorio1;
    printf("Digite o nome do territorio 1: ");
    fgets(territorio1.nome);
    printf("Digite a cor do exército que domina o territorio 1: ");
    fgets(territorio1.cor);
    printf("Digite o número de tropas no territorio 1: ");
    scanf("%d", &territorio1.tropas);
    printf("Territorio 1 cadastrado com sucesso!\n");

    struct Territorio territorio2;
    printf("Digite o nome do territorio 2: ");
    fgets(territorio2.nome);
    printf("Digite a cor do exército que domina o territorio 2: ");
    fgets(territorio2.cor);
    printf("Digite o número de tropas no territorio 2: ");
    scanf("%d", &territorio2.tropas);
    printf("Territorio 2 cadastrado com sucesso!\n");

    struct Territorio territorio3;
    printf("Digite o nome do territorio 3: ");
    fgets(territorio3.nome);
    printf("Digite a cor do exército que domina o territorio 3: ");
    fgets(territorio3.cor);
    printf("Digite o número de tropas no territorio 3: ");
    scanf("%d", &territorio3.tropas);
    printf("Territorio 3 cadastrado com sucesso!\n");

    struct Territorio territorio4;
    printf("Digite o nome do territorio 4: ");
    fgets(territorio4.nome);
    printf("Digite a cor do exército que domina o territorio 4: ");
    fgets(territorio4.cor);
    printf("Digite o número de tropas no territorio 4: ");
    scanf("%d", &territorio4.tropas);
    printf("Territorio 4 cadastrado com sucesso!\n");

    struct Territorio territorio5;
    printf("Digite o nome do territorio 5: ");
    fgets(territorio5.nome);
    printf("Digite a cor do exército que domina o territorio 5: ");
    fgets(territorio5.cor);
    printf("Digite o número de tropas no territorio 5: ");
    scanf("%d", &territorio5.tropas);
    printf("Territorio 5 cadastrado com sucesso!\n");

    printf("\n===== RESUMO DOS TERRITORIOS CADASTRADOS =====\n");
    printf("Territorio 1: Nome: %s, Cor: %s, Tropas: %d\n", territorio1.nome, territorio1.cor, territorio1.tropas);
    printf("Territorio 2: Nome: %s, Cor: %s, Tropas: %d\n", territorio2.nome, territorio2.cor, territorio2.tropas);
    printf("Territorio 3: Nome: %s, Cor: %s, Tropas: %d\n", territorio3.nome, territorio3.cor, territorio3.tropas);
    printf("Territorio 4: Nome: %s, Cor: %s, Tropas: %d\n", territorio4.nome, territorio4.cor, territorio4.tropas);
    printf("Territorio 5: Nome: %s, Cor: %s, Tropas: %d\n", territorio5.nome, territorio5.cor, territorio5.tropas);

    return 0;
}