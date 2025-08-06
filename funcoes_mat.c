#include "arquivo.h"

const float PI = 3.14;

/* Função que calcula as operações normais como soma, subtração, multiplicação e divisão */
void operacao(int op){
    
    float num, conta;
    char tipo_op;

    if(op == 1){
        printf("\nPara poder parar a execução da conta digite 0 no tipo de operação!!\n");
        printf("Informe o tipo da operacao(+, -, *, /) que deseja fazer: \n");

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
        }while(tipo_op != 0);
    }

    return;

}


/* Funções de cálculos matemáticos */
void calc_mat(int mat){

    int resp, resp2, hipot, cateto, cat1, cat2, expo, num, i, n, incog;
    float a, b, c, D, x, x1, x2, y1, y2, delta, raio, area, base, baseM, altura, lado, pg, pgigual;
    float diagonalM, diagonalm, rad;

    resp = 0;

    while(resp != -1){

        printf("\nEscolha o cálculo que gostaria de estar realizando!\n");
        printf("Digite -1 para poder sair!\n");
        printf("----------------------------------------------------\n\n");
        printf("1 - Dizima Períodica\n");
        printf("2 - Teorema de Pitagoras\n");
        printf("3 - Areas\n");
        printf("4 - Exponenciacao\n");
        printf("5 - Logaritmo\n");
        printf("6 - Radiciacao\n");
        printf("7 - Distancia entre dois pontos\n");
        printf("8 - Equacao do Primeiro Grau\n");
        printf("9 - Equacao do Segundo Grau\n");
        printf("10 - Funcao do Primeiro Grau\n");
        printf("11 - Funcao do Segundo Grau\n");
        printf("12 - Funcao Exponencial\n");
        printf("13 - Funcao Logaritma\n");
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

                if(resp2 == 1){
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
                printf("4 - Trapezio\n");
                printf("5 - Circulo\n");
                printf("6 - Losango\n");
                printf("--------------------------------------------------\n\n");

                scanf("%d", &resp2);

                switch (resp2)
                {
                    /* Area do Quadrado */
                    case 1:
                        printf("Informe a medida do lado do quadrado: \n");
                        scanf("%f", &lado);

                        area = lado * lado;

                        printf("A area do Quadrado e de: %.2f\n", area);
                    break;

                    /* Area do Triangulo */
                    case 2:
                        printf("Informe a o valor da Base: \n");
                        scanf("%f", &base);
                        printf("Informe o valor da Altura: \n");
                        scanf("%f", &altura);

                        area = (base * altura) / 2;

                        printf("A area do Triangulo e de: %.2f\n", area);
                    break;

                    /* Area do Retangulo */
                    case 3:
                        printf("Informe a Base: \n");
                        scanf("%f", &base);
                        printf("Informe a Altura: \n");
                        scanf("%f", &altura);

                        area = base * altura;

                        printf("A area desse Retangulo e de: %.2f\n", area);
                    break;

                    /* Area do Trapezio */
                    case 4:
                        printf("Informe a Base maior: \n");
                        scanf("%f", &baseM);
                        printf("Informe a Base menor: \n");
                        scanf("%f", &base);
                        printf("Informe a Altura: \n");
                        scanf("%f", &altura);

                        area = ((baseM + base) * altura) / 2;

                        printf("A area do Trapezio e de: %.2f\n", area);
                    break;

                    /* Area do Circulo */
                    case 5:
                        printf("Informe o valor do Raio: \n");
                        scanf("%f", &raio);

                        area = (raio * raio) * PI;

                        printf("A area desse Circulo e de: %.2f\n", area);
                    break;

                    case 6:
                        printf("Informe o valor da Diagonal Maior: \n");
                        scanf("%f", &diagonalM);
                        printf("Informe o valor da Diagonal Menor: \n");
                        scanf("%f", &diagonalm);

                        area = (diagonalM * diagonalm) / 2;

                        printf("A area do Losango e de: %.2f\n", area);
                    break;
                }
            break;

            /* Exponenciação */
            case 4: 
                printf("Informe o número que deseja saber a potencia: \n");
                scanf("%d", &num);
                printf("Informe o indice da potencia que ele vai ter: \n");
                scanf("%d", &n);

                expo = pow(num, n);

                printf("A potencia de %d é: %d\n", num, expo);
            break;

            /* Logaritmo */
            case 5: 
                /* code */
            break;

            /* Radiciação */
            case 6: 
                printf("Escolha uma das opções que deseja: \n");
                printf("1 - Raiz quadrada\n");
                printf("2 - Raiz de qualquer indice\n");
                printf("-----------------------------------\n");

                switch (resp2)
                {
                    /* Cálculo tradicional com a raiz quadrada */
                    case 1:
                        printf("Informe o numero que vc deseja: \n");
                        scanf("%d", &num);

                        rad = sqrt(num);

                        printf("A raiz de %d, é: %.2f\n", num , rad);
                    break;

                    /* Cálculo da raiz com qualquer indice */
                    case 2:
                        printf("Informe o numero que vc quer descobrir a raiz: \n");
                        scanf("%d", &num);
                        printf("Infome o indice da raiz: \n");
                        scanf("%d", &i);

                        rad = pow(num, 1/i);

                        printf("A raiz de %d, é: %.2f\n", num, rad);
                    break;
                
                    /* Para se caso o usuário digitar uma opção que não esteja listada */
                    default:
                        printf("Opção errada! Escolha outra opção!!\n");
                    break;
                } 
            break;

            /* Distancia entre dois pontos */
            case 7: 
                printf("Quando digitar um valor de espaço para digitar o outro valor!\n");
                printf("Informe os valores de x e y do ponto A: \n");
                scanf("%f %f", &x1, &x2);
                printf("Informe os valores de x e y do ponto B: \n");
                scanf("%f %f", &y1, &y2);

                D = pow((x2 - x1), 2) + pow((y2 - y1), 2);
                D = sqrt(D);

                printf("A distancia entre o ponto A e o ponto B é de: %.2f\n", D);
            break;

            /* Equação do primeiro grau */
            case 8: 
                printf("A formula do primeiro grau de uma incognita e da seguinte forma: ax + b = 0\n");
                printf("A formula do primeiro grau de duas incognitaa e da seguinte forma: ax + by + c = 0\n");
                printf("A equacao do e de uma incognita ou duas?\n");
                printf("Digite 1 ou 2\n");
                scanf("%d", &incog);

                /* Caso for de uma incognita */
                if(incog == 1){
                    printf("Informe o valor de A: \n");
                    scanf("%fx", &a);
                    printf("Informe o valor de B: \n");
                    scanf("%f", &b);
                    printf("Digite o valor após o igual: \n");
                    scanf("%f", &pgigual);

                    /* Verificando se a é diferente de zero */
                    if(a == 0){
                        printf("Esquacao invalida!!\n");
                        printf("Informe o valor de A que seja valido!!\n");
                    }
                    else{
                        /* Para quando a equação for igual a zero */
                        if(pgigual == 0){
                            /* Para quando o meu b for menor do que zero */
                            if(b < 0){
                                /* ax - b + b = 0 + b */
                                pg = b + (b * -1);/* Aqui estou fazendo apenas a parte do b */

                                b = (b * -1) / a;
                                a = (a / a) - pg;

                                if(a == 1){
                                    x = b;

                                    printf("O valor de X é: %.2f\n", x);
                                }
                                else{
                                    x = b / a;

                                    printf("O valor de X é: %.2f\n", x);
                                }

                                /* Depois que definimos o valor de x iremos provar se a equação é verdadeira ou não */
                                if(x == pgigual){
                                    printf("A equação é verdadeira!!\n");
                                }
                                else{
                                    printf("A equação é falsa!!\n");
                                }
                            }
                            else{
                                /* Para quando o meu b for maior do que zero */
                                if(b > 0){
                                    /* ax + b - b = 0 - b */
                                    pg = b + (b * -1);/* Aqui estou fazendo apenas a parte do b */

                                    b = (b * -1) / a;
                                    a = (a / a) - pg;

                                    if(a == 1){
                                        x = b;

                                        printf("O valor de X é: %.2f\n", x);
                                    }
                                    else{
                                        x = b / a;

                                        printf("O valor de X é: %.2f\n", x);
                                    }

                                    /* Depois que definimos o valor de x iremos provar se a equação é verdadeira ou não */
                                    if(x == pgigual){
                                        printf("A equação é verdadeira!!\n");
                                    }
                                    else{
                                        printf("A equação é falsa!!\n");
                                    }
                                }
                            }
                        }
                        else{
                            /* Para quando a equacao tiver um resultado maior do que zero */
                            if(pgigual > 0){
                                
                            }
                            else{
                                /* Para quando a tiver um resultado menor do que zero */
                                if(pgigual < 0){

                                }
                            }
                        }
                    }
                }
                else{
                    /* Caso for duas incognitas */
                    if(incog == 2){
                        printf("Informe o valor de A: \n");
                        scanf("%fx", &a);
                        printf("Informe o valor de B: \n");
                        scanf("%f", &b);
                        printf("Informe o valor de C:\n");
                        scanf("%f", &c);
                        printf("Digite o valor após o igual: \n");
                        scanf("%f", &pgigual);
                    }
                    else{
                        printf("Quantidade de incognitas invalida!!\n");
                    }
                }
                
            break;

            /* Equação do segundo grau */
            case 9: 
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
            case 10: 
                /* code */
            break;

            /* Função do segundo grau */
            case 11: 
                /* code */
            break;

            /* Função Exponencial */
            case 12: 
                /* code */
            break;

            /* Função Logarítma */
            case 13: 
                /* code */
            break;
        }

        printf("Deseja continuar com as operações?\n");
        printf("Digite 1 para sim e -1 para não");
        scanf("%d", &resp);
    }

    return;
}
