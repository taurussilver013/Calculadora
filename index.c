#include <stdio.h>

int Op;
float Aux, Sec;
//Variáveis Globais

int Soma();
//Chamada de funções externas

int main() { //Função Principal
    system("clear"); //Limpa o terminal
    printf("\n=====================\n");
    printf(" CALCULADORA SIMPLES\n");
    printf("=====================\n");

    printf("[1] - Somar(+)\n");
    printf("[2] - Subtrair(-)\n");
    printf("[3] - Dividir(/)\n");
    printf("[4] - Multiplicar(*)\n");
    printf("[5] - Sair\n");

    printf("\n=========\n");
    printf("Opção: ");
    scanf("%d", &Op); //Escolha do usuário

    switch(Op) {
        case 1:
            Soma();
            
            break;

        case 2:
            system("clear");
            printf("Função Subtrair é ativada...\n");

            break;

        case 3:
            system("clear");
            printf("Função Dividir é ativada...\n");

            break;

        case 4:
            system("clear");
            printf("Função Multiplicar é ativada...\n");

            break;

        case 5:
            system("clear");
            printf("#################\n");
            printf(" Fim da execução\n");
            printf("#################\n\n");

            break;

    }

    return 0;
}
int Soma() { // Função Soma
    system("clear");
    printf("\n=======\n");
    printf(" SOMAR\n");
    printf("=======\n");

    printf("Digite um número: ");
    scanf("%f", &Aux);

    do {
        printf("Digite outro número: ");
        scanf("%f", &Sec);

        Aux = Aux + Sec;

        printf("\nSomar mais algum? [1/0]: ");
        scanf("%d", &Op);


    } while(Op == 1);

    system("clear");
    printf("\n=======================\n");
    printf(" Resultado Final: %.2f\n", Aux);
    printf("=======================\n");

    printf("[1] - Resetar\n");
    printf("[2] - Voltar\n");

    printf("\n=========\n");
    printf("Opção: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            Soma();

            break;

        case 2:
            main();

            break;

        default:
            system("clear");
            printf("Valor inválido, tente novamente...\n");
            sleep(1);
            system("clear");
            main();

            break;
            
    }


    return 0;
}