#include <stdio.h>

int main(){
    int x1, x2, x3, x4;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    int x = x1;
    if (x2>x){
        x = x2;
    }
    if (x3>x){
        x = x3;
    }
    if (x4>x){
        x = x4;
    }
    printf("%d", x);
    return 0;
}