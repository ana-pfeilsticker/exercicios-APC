
#include <stdio.h>
int main(){
    int i;
    int c =0;
    int soma = 0;
    int sn = 0;
    scanf("%d", &i);
    int vet[i];
    while (c < i){
        scanf("%d", &vet[c]);
        soma = soma + vet[c];
        c++;
    }
    c = 0;
    while (c< i){
        if (vet[c] > soma/i){
            printf("%d ", vet[c]);
            sn = 1;
        }
        c++;
    }
    if (sn == 0){
        printf("0");
    }
    return 0;
}