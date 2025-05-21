#include "arquivo.h"

/* Função que calcula as operações normais como soma, subtração, multiplicação e divisão */
void operacao(int op){
    
    float num, conta;
    char tipo_op;

    if(op == 1){
        printf("\nPara poder para a execução da conta digite 0 no tipo de operação!!\n");
        printf("Informe primeiro o icone da operacao que deseja fazer: \n");

        conta = 0;

        do{
            scanf("%c", &tipo_op);

            switch (tipo_op)
            {
                case '+':
                    printf("Informe os números que vc gostaria de somar: \n");
                    scanf("%f", &num);

                    conta = conta + num;

                    printf("\n----------------------------\n");
                    printf("%.2f", conta);
                    printf("\n----------------------------\n");
                break;
                
                case '-':
                    printf("Informe os números que vc gostaria de somar: \n");
                    scanf("%f", &num);

                    conta = conta - num;

                    printf("\n----------------------------\n");
                    printf("%.2f", conta);
                    printf("\n----------------------------\n");
                break;

                case '*':
                    printf("Informe os números que vc gostaria de somar: \n");
                    scanf("%f", &num);

                    conta = conta * num;

                    printf("\n----------------------------\n");
                    printf("%.2f", conta);
                    printf("\n----------------------------\n");
                break;

                case '/':
                    printf("Informe os números que vc gostaria de somar: \n");
                    scanf("%f", &num);

                    conta = conta / num;

                    printf("\n----------------------------\n");
                    printf("%.2f", conta);
                    printf("\n----------------------------\n");
                break;
            }

            printf("Informe primeiro o icone da operacao que deseja fazer: \n");
        }while(tipo_op == 0);
    }

}

void calc_mat(int mat){

    int resp;

    resp = 0;

    while(resp != -1){

        printf("\nEscolha o cálculo que gostaria de estar realizando!\n");
        printf("Digite -1 para poder sair!\n");
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
        printf("----------------------------------------------------\n");

        scanf("%d", &resp);

        switch (resp)
        {
            case 1:
                /* code */
            break;
        
            case 2:
                /* code */
            break;

            case 3:
                /* code */
            break;

            case 4:
                /* code */
            break;

            case 5:
                /* code */
            break;

            case 6:
                /* code */
            break;

            case 7:
                /* code */
            break;

            case 8:
                /* code */
            break;

            case 9:
                /* code */
            break;

            case 10:
                /* code */
            break;

            case 11:
                /* code */
            break;

            case 12:
                /* code */
            break;

            case 13:
                /* code */
            break;
        }

    }
    
}
