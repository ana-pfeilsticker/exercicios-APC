<<<<<<< HEAD
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
=======
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
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}