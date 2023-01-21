#include <stdio.h>


int main(){
    int i =0;
    int j =0;
    int situacao = 0;
    int qnt =0;
    int soma = 0;
    int maiorsoma = 0;

    scanf("%d", &qnt);
    int matriz[qnt][qnt];

    while (i<qnt){
        j = 0;
        while (j< qnt){
            scanf("%d", &situacao);
            matriz[i][j] = situacao;
            j++;
        }
        i++;   
    }

    i = 0;
    j = 0;
    int coluna = 0;
    while (i<qnt){
        j = 0;
        soma = 0;
        while (j< qnt){
            soma = soma + matriz[j][i];
            j++;
        }

        if(soma > maiorsoma){
            maiorsoma = soma;
            coluna = i +1;
        }

        i++;  
    }
    printf("%d", coluna);

    return 0;
}