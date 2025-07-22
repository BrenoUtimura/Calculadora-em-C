#include "arquivo.h"

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