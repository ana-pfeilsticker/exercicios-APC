#include <stdio.h>
int main(){
    int i;
    int c = 0;
    scanf("%d", &i);
    int num[i];
    while (c< i){
        scanf("%d", &num[c]);

        c++;
    }
    c = 0;
    while(c<i){
        if (num[c]%2 == 0){
            printf("%d ", num[c]);
        }
        c++;
    }
    c = 0;
    printf("\n");
    while(c<i){
        if (num[c]%2 != 0){
            printf("%d ", num[c]);
        }
        c++;
    }

    return 0;
}