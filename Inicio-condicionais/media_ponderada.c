#include <stdio.h>

int main(){

    double media;
    double x2;
    double p1, p2;
    scanf("%lf" " %lf" " %lf" "%lf", &media, &x2, &p1, &p2);
    
    
    double x1 = (((p1+p2)*media)-(x2*p2))/p1;
    printf("%lf", x1);




    return 0;
}
