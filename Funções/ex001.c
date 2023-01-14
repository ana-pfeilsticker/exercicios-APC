#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
    int i = 0;
    int resultado = 0;
    int resultadofinal = 0;
    while(i<parcelas){
        scanf("%d", &resultado);
        if (i == 0){
            resultadofinal = resultado;
        }
        if ((op == '+')&&(i != 0)){
            resultadofinal = resultadofinal + resultado;
        }
        if ((op == '-')&&(i!=0)){
            resultadofinal = resultadofinal - resultado;
        }
        i++;

    }
    return resultadofinal;
    
}