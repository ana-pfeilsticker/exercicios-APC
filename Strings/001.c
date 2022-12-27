#include <stdio.h>
int main(){
    char palavra[1002];
    int tamanho;
    scanf("%s%n", palavra,&tamanho);
    printf("%d", tamanho);

    return 0;
}