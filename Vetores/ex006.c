<<<<<<< HEAD
#include <stdio.h>
int main(){
    int i;
    int c = 0;
    int soma;
    scanf("%d", &i);
    int vet1[i];
    int vet2[i];
    while (c<i){
        scanf("%d", &vet1[c]);
        c ++;
    }
    c = 0;
    while (c<i){
    scanf("%d", &vet2[c]);
    c ++;
    }
    c = 0;
    while (c< i){
    printf("%d ", vet1[c]+vet2[c]);
    c++;
    }
    return 0;
=======
#include <stdio.h>
int main(){
    int i;
    int c = 0;
    int soma;
    scanf("%d", &i);
    int vet1[i];
    int vet2[i];
    while (c<i){
        scanf("%d", &vet1[c]);
        c ++;
    }
    c = 0;
    while (c<i){
    scanf("%d", &vet2[c]);
    c ++;
    }
    c = 0;
    while (c< i){
    printf("%d ", vet1[c]+vet2[c]);
    c++;
    }
    return 0;
>>>>>>> b5dd509e90e568d6a61e985b3951cd57c692992c
}