#include "arquivo.h"


/* 
Este arquivo ele é somente uma central de redirecionamento para 
os outros arquivos do projeto que vão contas a outras funções de 
cálculos 
*/

int main(void) {


    int op;

    printf("SEJA BEM-VINDO AO CALCULADORA GERAL!!\n");
    printf("Qual processo deseja estar vendo hoje?\n");
    printf("------------------------------------------------\n\n");
    printf("1 - Calculadora Normal\n");
    printf("2 - Calcular Binários\n");
    printf("3 - Conversor de Moeda\n");
    printf("4 - Cálculos Financeiros\n");
    printf("5 - Cálculos Matemáticos\n");
    printf("6 - Cálculos Físicos\n");
    printf("------------------------------------------------\n\n");

    scanf("%d", &op);

    switch(op){
        case 1:
            Calculadora(void);
        break;
            
        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 6:

        break;

        default:
            printf("Escolha uma opção válida por favor!\n");
        break;
    }

    return 0;
}