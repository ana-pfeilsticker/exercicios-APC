#include <stdio.h>
int main(){

    char palavra[1002];
    int tamanho;
    scanf("%s%n", palavra,&tamanho);
    int i = tamanho -1;
    while (i>=0){
        printf("%c", palavra[i]);
        i --;
    }

    return 0;
}