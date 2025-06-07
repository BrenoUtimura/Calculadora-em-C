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
    int resp, op, calc, mat, fin, numBase;

    calc = 1;

    while(calc == 1){
        printf("\nSeja Bem-vindo a Calculadora!\n");
        printf("-----------------------------\n");
        printf("Escolha a opção que desejar!\n");
<<<<<<< HEAD
        printf("1 - Calcular operações tradicionais\n");
=======
        printf("1 - Calcular operações tradicionais?\n");
>>>>>>> aa47f0cf3ecd26543a6c0c0ac16c2a1e5b1b27de
        printf("2 - Cálculos Matemáticos\n");
        printf("3 - Cálculos Financeiros\n");
        printf("4 - Conversao de Bases Numéricas\n");
        printf("---------------------------------\n");
        printf("Para parar o sistema digite 0!!\n\n");

        scanf("%d", &resp);

<<<<<<< HEAD
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
        
=======
        if(resp == 0){
            calc = 0;
        }
        else{
            if(resp == 1){
                op = resp;

                operacao(op);
            }
            else{
                if(resp == 2){
                    
                    mat = 2;

                    calc_mat(mat);
                }
                else {
                    if(resp == 3){

                        fin = resp;

                        calc_fin(fin);
                    }
                    else{
                        if(resp == 4){

                            numBase = resp;

                            baseNum(numBase);
                        }
                    }
                }
            }
>>>>>>> aa47f0cf3ecd26543a6c0c0ac16c2a1e5b1b27de
        }
    }


    return 0;
}