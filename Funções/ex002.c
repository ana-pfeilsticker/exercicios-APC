#include <stdio.h>
int validaPeso ( double pesoKg ) {
    if (pesoKg < 0){
        return 0;
    }
    else{
        return 1;
    }}

void fazGrama ( double pesoKg ){
    double grama = pesoKg * 1000;
    printf("%.4lf\n", grama);
}
void fazTonelada ( double pesoKg ){
    double tonelada = pesoKg / 1000;
    printf("%.4lf\n", tonelada);
}


