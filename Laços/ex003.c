#include <stdio.h>
int main(){
    int linhas;
    int c = 0;
    int soma = 0;
    int numero;
    scanf("%d", &linhas);
    while(c < linhas){
        scanf("%d", &numero);
        soma = soma + numero;
        c++;


    }
    printf("%d\n", soma);





    return 0;
}