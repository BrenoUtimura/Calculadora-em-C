#include "arquivo.h"

/*
    ** Variaveis **

    resp: resposta (pega a resposta do usuário);

    op: operação  (Utilizado para operações normais);

    calc: calculadora (Irá servir como uma flag de confirmação de
aplicação rodando ou finalizada);

*/


int main(void)
{
    int resp, op, calc;

    calc = 1;

    while(calc == 1){
        printf("\nSeja Bem-vindo a Calculadora!\n");
        printf("-----------------------------\n");
        printf("Escolha a opção que desejar!\n");
        printf("1 - Calcular operações tradicionais?\n");
        printf("2 - Fazer cálculos complexos?\n");
        printf("---------------------------------\n");
        printf("Para parar o sistema digite 0!!\n\n");

        scanf("%d", &resp);

        if(resp == 0){
            calc = 0;
        }
        else{
            if(resp == 1){
                printf("\n1 - Soma\n");
                printf("2 - Subtração\n");
                printf("3 - Multiplicacao\n");
                printf("4 - Divisao\n");

                scanf("%d", &op);

                operacao(op);
            }
            else{
                if(resp == 2){
                    printf("\nEscolha o cálculo que gostaria de estar realizando!\n");
                    printf("----------------------------------------------------\n\n");
                    printf("1 - Dizima Períodica\n");
                    printf("----------------------------------------------------\n");
                    printf("2 - Teorema de Pitagoras\n");
                    printf("----------------------------------------------------\n");
                    printf("3 - Areas\n");
                    printf("----------------------------------------------------\n");
                    printf("4 - Potenciacao\n");
                    printf("----------------------------------------------------\n");
                    printf("5 - Exponenciacao");
                    printf("----------------------------------------------------\n");
                    printf("6 - Logaritmo\n");
                    printf("----------------------------------------------------\n");
                    printf("7 - Distancia entre dois pontos\n");
                    printf("----------------------------------------------------\n");
                    printf("8 - Equacao do Primeiro Grau\n");
                    printf("----------------------------------------------------\n");
                    printf("9 - Equacao do Segundo Grau\n");
                    printf("----------------------------------------------------\n");
                    printf("10 - Funcao do Primeiro Grau\n");
                    printf("----------------------------------------------------\n");
                    printf("11 - Funcao do Segundo Grau\n");
                    printf("----------------------------------------------------\n");
                    printf("12 - Funcao Exponencial\n");
                    printf("----------------------------------------------------\n");
                    printf("13 - Funcao Logaritma\n");
                }
            }
        }
    }


    return 0;
}