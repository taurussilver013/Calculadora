#include <stdio.h>

int Op;
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
            printf("Programa é encerrado...\n");

            break;

    }

    return 0;
}
int Soma() {
    system("clear");
    printf("\n=======\n");
    printf(" SOMAR\n");
    printf("=======\n");

    printf("[1] - Dois números\n");
    printf("[2] - Três números\n");
    printf("[3] - Quatro números ou mais\n");

    printf("\n========\n");
    printf("Opção: ");
    scanf("%d", &Op);

    return 0;
}