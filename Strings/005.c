<<<<<<< HEAD
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
=======
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
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}