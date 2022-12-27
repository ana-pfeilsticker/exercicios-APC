#include <stdio.h>
int main(){
    int i;
    int c = 0;
    int sn = 0;
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
    c =0;
    while (c <i){
        if (vet1[c] != vet2[c]){
        printf("nao\n");
        sn = 0;
        break;
        }
        else{
            sn = 1;
        }
        c++;
    }
    if(sn == 1){
        printf("sim\n");
    }
    return 0;
}