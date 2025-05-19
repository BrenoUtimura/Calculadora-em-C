#include "arquivo.h"

/* Função que calcula as operações normais como soma, subtração, multiplicação e divisão */
void operacao(int op){
    
    float num, conta;

    if(op == 1){
        printf("\nPara poder para a execução da conta digite o exit!!\n");
        printf("Informe os números que vc gostaria de somar: \n");

        conta = 0;

        do{
            scanf("%f", &num);

            conta = conta + num;

            printf("\n----------------------------\n");
            printf("%.2f", conta);
            printf("\n----------------------------\n");

            printf("\nInforme os números que vc gostaria de somar: \n");
        }while(num != 0);
    }

}

/* Função que calcula a dizima periódica */
void dizima(float diz){}

/* Função que calcula a formula do teorema de pitagoras */
void teorema_pitagoras(float pit){}
