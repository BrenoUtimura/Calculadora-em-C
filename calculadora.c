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
    int resp, op, calc, mat, fin;

    calc = 1;

    while(calc == 1){
        printf("\nSeja Bem-vindo a Calculadora!\n");
        printf("-----------------------------\n");
        printf("Escolha a opção que desejar!\n");
        printf("1 - Calcular operações tradicionais?\n");
        printf("2 - Cálculos Matemáticos\n");
        printf("3 - Cálculos Financeiros\n");
        printf("---------------------------------\n");
        printf("Para parar o sistema digite 0!!\n\n");

        scanf("%d", &resp);

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
                }
            }
        }
    }


    return 0;
}