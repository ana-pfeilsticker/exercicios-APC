#include <stdio.h>

int main(){

int j1, j2;

scanf("%d %d", &j1, &j2);
if (j1 == 0){
    if (j2 == 0){
        printf("empate");
    }
    if ((j2 == 2) || (j2 == 3)){
        printf("A");
    }
    if ((j2 == 1)|| (j2 == 4)){
        printf("B");
    }
}
if (j1 == 1){
    if (j2 == 1){
        printf("empate");
    }
    if ((j2 == 0) || (j2 == 4)){
        printf("A");
    }
    if ((j2 == 2)|| (j2 == 3)){
        printf("B");
    }
}
if (j1 == 2){
    if (j2 == 2){
        printf("empate");
    }
    if ((j2 == 1) || (j2 == 3)){
        printf("A");
    }
    if ((j2 == 0)|| (j2 == 4)){
        printf("B");
    }
}
if (j1 == 3){
    if (j2 == 3){
        printf("empate");
    }
    if ((j2 == 4) || (j2 == 1)){
        printf("A");
    }
    if ((j2 == 0)|| (j2 == 2)){
        printf("B");
    }
}
if (j1 == 4){
    if (j2 == 4){
        printf("empate");
    }
    if ((j2 == 2) || (j2 == 0)){
        printf("A");
    }
    if ((j2 == 1)|| (j2 == 3)){
        printf("B");
    }
}



    return 0;
}