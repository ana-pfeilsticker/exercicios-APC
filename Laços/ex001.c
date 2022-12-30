#include <stdio.h>
int main(){
    int linhas;
    int imparpar = 1;
    scanf("%d", &linhas);
    while(imparpar<=linhas){
        if (imparpar%2 == 1){
            printf("THUMS THUMS THUMS\n");
        }
        else{
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
        imparpar ++;



    }





    return 0;
}