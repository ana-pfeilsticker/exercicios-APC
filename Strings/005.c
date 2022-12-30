#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int conto = 0;

    int tamanho;
    char str[103];
    while(fgets(str, 103, stdin) != NULL){

        i = 0;
        while(str[i] != '\0'){
            if (str[i] == ('o')){
                conto++;
            }
            i++;
        }

    }
    printf("%d", conto);

    return 0;
}