#include <stdio.h>

int main(){
    double horas;
    scanf("%lf", &horas);
    long int minutos = horas*60;
    long int segundos = minutos*60;
    printf("%ld\n %ld\n", minutos, segundos);

    return 0;
}
