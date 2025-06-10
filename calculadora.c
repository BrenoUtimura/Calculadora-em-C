#include "arquivo.h"

/*
    ** Variaveis **

    resp: resposta (pega a resposta do usuário);

    op: operação  (Utilizado para operações normais);

    calc: calculadora (Irá servir como uma flag de confirmação de
aplicação rodando ou finalizada);

    mat: variavel para o chamado da função matemática;

    fin: variavel para a chamad da função finaceira;

    numBase: é a variavel para a chamada da função de conversão de base numerica

*/


int main(void)
{
    int resp, op, calc, mat, fin, numBase;

    calc = 1;

    while(calc == 1){
        printf("\nSeja Bem-vindo a Calculadora!\n");
        printf("-----------------------------\n");
        printf("Escolha a opção que desejar!\n");
        printf("1 - Calcular operações tradicionais\n");
        printf("2 - Cálculos Matemáticos\n");
        printf("3 - Cálculos Financeiros\n");
        printf("4 - Conversao de Bases Numéricas\n");
        printf("---------------------------------\n");
        printf("Para parar o sistema digite 0!!\n\n");

        scanf("%d", &resp);

        switch (resp)
        {
            /* Calcular operações tradicionais */
            case 1:
                op = resp;

                operacao(op);
            break;

            /* Cálculos Matemáticos */
            case 2:
                mat = resp;

                calc_mat(mat);
            break;

            /* Cálculos Financeiros */
            case 3:
                fin = resp;

                calc_fin(fin);
            break;

            /* Conversao de Bases Numéricas */
            case 4:
                numBase = resp;

                baseNum(numBase);
            break;
        
        }
    
    return 0;
}