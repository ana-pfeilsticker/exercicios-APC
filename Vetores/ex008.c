<<<<<<< HEAD

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
=======

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
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}