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
    printf("4 - Hexadecimal para Binario\n");
    printf("5 - Binario para Octal\n");
    printf("6 - Octal para Binario\n");
    printf("7 - Hexadecimal para Octal\n");
    printf("-----------------------------------\n\n");

    scanf("%d", &resp);

    switch (resp)
    {
        /* Decimal para Binario */
        case 1:
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
        break;

        /* Binario para Decimal */
        case 2:
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
        break;

        /* Binario para Hexadecimal */
        case 3:
            /* code */
        break;

        /* Hexadecimal para Binario */
        case 4:
            /* code */
        break;

        /* Binario para Octal */
        case 5:
            /* code */
        break;

        /* Octal para Binario */
        case 6:
            /* code */
        break;
    
    }
}


/* Funções de cálculos matemáticos */
void calc_mat(int mat){

    int resp, resp2, hipot, cateto, cat1, cat2, area, base, altura, lado;
    float a, b, c, x1, x2, delta;

    resp = 0;

    while(resp != -1){

        printf("\nEscolha o cálculo que gostaria de estar realizando!\n");
        printf("Digite -1 para poder sair!\n");
        printf("----------------------------------------------------\n\n");
        printf("1 - Dizima Períodica\n");
        printf("2 - Teorema de Pitagoras\n");
        printf("3 - Areas\n");
        printf("4 - Potenciacao\n");
        printf("5 - Exponenciacao");
        printf("6 - Logaritmo\n");
        printf("7 - Radiciacao\n");
        printf("8 - Distancia entre dois pontos\n");
        printf("9 - Equacao do Primeiro Grau\n");
        printf("10 - Equacao do Segundo Grau\n");
        printf("11 - Funcao do Primeiro Grau\n");
        printf("12 - Funcao do Segundo Grau\n");
        printf("13 - Funcao Exponencial\n");
        printf("14 - Funcao Logaritma\n");
        printf("----------------------------------------------------\n");

        scanf("%d", &resp);

        switch (resp)
        {
            /* Dizima Periódica */
            case 1: 
                /* code */
            break;
        
            /* Teorema de Pitogoras */
            case 2: 
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

                        /* Nessa parte seria para quando apenas um dos catetos não possui valor
                        informado neles */
                        if(cat1 == 0){
                            cat1 = pow(hipot, 2) - pow(cat2, 2);
                            cat1 = pow(cat1, 2);

                            printf("O valor do cateto A é: %d", cat1);
                        }

                        if(cat2 == 0){
                            cat2 = pow(hipot, 2) - pow(cat1, 2);
                            cat2 = pow(cat2, 2);

                            printf("O valor do cateto A é: %d", cat2);
                        }

                        if(cat1 == 0 && cat2 == 0){
                            printf("O teorema de pitagoras não pode ser resolvido pois precisa de pelo menos um dos catetos informados!!\n");

                        }
                    }
                }

            break;

            /* Areas */
            case 3: 
                printf("Deseja calcular a area de qual forma geometrica?\n");
                printf("--------------------------------------------------\n\n");
                printf("1 - Quadrado\n");
                printf("2 - Triangulo\n");
                printf("3 - Retangulo\n");
                printf("--------------------------------------------------\n\n");

                scanf("%d", &resp2);

                switch (resp2)
                {
                    case 1:
                        /* code */
                    break;

                    case 2:
                        printf("Informe a o valor da Base: \n");
                        scanf("%d", &base);
                        printf("Informe o valor da Altura: \n");
                        scanf("%d", &altura);

                        area = (base * altura) / 2;

                        printf("A area do triângulo é: %d\n", area);
                    break;

                    case 3:
                        /* code */
                    break;
                }
            break;

            /* Potenciação */
            case 4: 
                /* code */
            break;

            /* Exponenciação */
            case 5: 
                /* code */
            break;

            /* Logaritmo */
            case 6: 
                /* code */
            break;

            /* Radiciação */
            case 7: 
                /* code */
            break;

            /* Distancia entre dois pontos */
            case 8: 
                /* code */
            break;

            /* Equação do primeiro grau */
            case 9: 
                /* code */
            break;

            /* Equação do segundo grau */
            case 10: 
                printf("Informe os valores da formula ax² + bx + c = 0:\n");
                printf("Informe o valor de A: ");
                scanf("%f", &a);
                printf("Informe o valor de B: ");
                scanf("%f", &b);
                printf("Informe o valor de C: ");
                scanf("%f", &c);

                delta = pow(b, 2) - 4 * a * c;

                if(delta > 0){
                    x1 = (-b + sqrt(delta)) / 2 * a;
                    x2 = (-b - sqrt(delta)) / 2 * a;

                    printf("A equação possui duas raizes:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
                else{
                    if(delta == 0){
                        x1 = (-b) / 2 * a;

                        printf("A equação possui apenas uma raiz real!\n");
                        printf("x1 = %.2f\n", x1);
                    }
                    else{
                        if(delta < 0){
                            printf("Não tem raízes reais!!\n");
                        }
                    }
                }
                

            break;

            /* Função do primeiro grau */
            case 11: 
                /* code */
            break;

            /* Função do segundo grau */
            case 12: 
                /* code */
            break;

            /* Função Exponencial */
            case 13: 
                /* code */
            break;

            /* Função Logarítma */
            case 14: 
                /* code */
            break;
        }

        printf("Deseja continuar com as operações?\n");
        printf("Digite 1 para sim e -1 para não");
        scanf("%d", &resp);
    }
    
}
