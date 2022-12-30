#include <stdio.h>

int main(){
    int i = 0;
    int qntstr;
    int maiorstr = 0;
    char palavra[1003];
    int tamanho;

    scanf("%d", &qntstr);
    while (i < qntstr){
        scanf("%s%n", palavra, &tamanho);
        if (tamanho -1 >= maiorstr){
            maiorstr = tamanho -1;
        }
        
        i++;
    }
    printf("%d", maiorstr);

}