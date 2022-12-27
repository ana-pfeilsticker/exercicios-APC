#include <stdio.h>
int main(){
    
    int soma = 0;
    int numero = 0;
    scanf("%d", &numero);
    
    while(numero!= 0){
        if (numero%2 == 0){
        soma += numero;
        }

        scanf("%d", &numero);

    }
    printf("%d\n", soma);

    return 0;
}