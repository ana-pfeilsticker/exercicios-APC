#include <stdio.h>

int main(){

float a, b;
float area_comparacao;
scanf("%f %f", &a, &b);
if (a+b == 160){
    printf("0");

}
if (a+b > 160){
    printf("1");
}
if (a+b < 160){
    printf("2");
}


    return 0;
}