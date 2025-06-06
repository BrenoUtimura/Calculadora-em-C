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

/* Função de conversão de bases numéricas */
void baseNum(int numBase){
    int resp, div, modResult, num, pot, soma;

    printf("Qual das opcoes deseja calcular?\n");
    printf("-----------------------------------\n");
    printf("1 - Decimal para Binario\n");
    printf("2 - Binario para Decimal\n");
    printf("3 - Binario para Hexadecimal\n");
    printf("4 - Hexadecimal para Octal\n");
    printf("-----------------------------------\n\n");

    scanf("%d", &resp);

    /* Decimal para Binario */
    if(resp == 1){
        printf("Informe o numero que deseja\n");
        scanf("%d", &num);

        div = num;
        while(div >= 2){
            modResult = div % 2;
            div = div / 2;

            printf("%d\n", modResult);
        }
        /* Para quando div for igual a 1 ou 0 */
        printf("%d\n", div);
    }
    else{
        /* Binario para Decimal */
        if(resp == 2){
            printf("Informe o numero binario dando enter para cada numero digitado!\n");
            printf("E informe o numero binaro de tras pra frente para dar certo!\n");
            printf("E para parar digite -1\n");

            scanf("%d", &num);
            soma = 0;
            pot = 1;

            while(num != -1){

                soma = (num * pot) + soma;
                pot = pot * 2;

                scanf("%d", &num);
            }

            printf("%d", soma);

        }
        else{
            /* Binario para Hexadecimal */
            if(resp == 3){
                
            }
            else{
                /* Hexadecimal para Octal */
                if(resp == 4){
                    
                }
            }
        }
    }

}


/* Funções de cálculos matemáticos */
void calc_mat(int mat){

    int resp, resp2, hipot, cateto, cat1, cat2;

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
        printf("7 - Radiciacao\n");
        printf("----------------------------------------------------\n");
        printf("8 - Distancia entre dois pontos\n");
        printf("----------------------------------------------------\n");
        printf("9 - Equacao do Primeiro Grau\n");
        printf("----------------------------------------------------\n");
        printf("10 - Equacao do Segundo Grau\n");
        printf("----------------------------------------------------\n");
        printf("11 - Funcao do Primeiro Grau\n");
        printf("----------------------------------------------------\n");
        printf("12 - Funcao do Segundo Grau\n");
        printf("----------------------------------------------------\n");
        printf("13 - Funcao Exponencial\n");
        printf("----------------------------------------------------\n");
        printf("14 - Funcao Logaritma\n");
        printf("----------------------------------------------------\n");

        scanf("%d", &resp);

        switch (resp)
        {
            case 1: /* Dizima Periódica */
                /* code */
            break;
        
            case 2: /* Teorema de Pitogoras */
                printf("Vai ter que definir o valor da hipotenusa?\n");
                printf("1 - Sim   e   2 - Não");
                scanf("%d", &resp2);

                if(resp2 = 1){
                    printf("Informe os valores dos catetos para definir a Hipotenusa\n");
                    printf("Cateto1:  ");
                    scanf("%d", &cat1);

                    printf("Cateto2:  ");
                    scanf("%d", &cat2);

                    cateto = pow(cat1, 2) + pow(cat2, 2);
                    hipot = pow(cateto, 2);

                    printf("O valor da hipotenusa é: %d", hipot);
                }
                else{
                    if(resp2 == 2){
                        printf("Coloque 0 para o valor que estiver faltando e caso tiver!\n");

                        printf("Hipotenusa:  ");
                        scanf("%d", &hipot);

                        printf("Cateto1:  ");
                        scanf("%d", &cat1);

                        printf("Cateto2:  ");
                        scanf("%d", &cat2);

                        if(cat1 == 0){

                        }

                        if(cat2 == 0){

                        }
                    }
                }

            break;

            case 3: /* Areas */
                /* code */
            break;

            case 4: /* Potenciação */
                /* code */
            break;

            case 5: /* Exponenciação */
                /* code */
            break;

            case 6: /* Logaritmo */
                /* code */
            break;

            case 7: /* Radiciação */
                /* code */
            break;

            case 8: /* Distancia entre dois pontos */
                /* code */
            break;

            case 9: /* Equação do primeiro grau */
                /* code */
            break;

            case 10: /* Equação do segundo grau */
                /* code */
            break;

            case 11: /* Função do primeiro grau */
                /* code */
            break;

            case 12: /* Função do segundo grau */
                /* code */
            break;

            case 13: /* Função Exponencial */
                /* code */
            break;

            case 14: /* Função Logarítma */
                /* code */
            break;
        }

    }
    
}
