#include <stdio.h>





double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double TA1 = tA;
    double TB1 = tB;
    double thoras = (TB1-TA1)/ 3600;
    double velmed = distancia/thoras;
    return velmed;

}


int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double TA2 = tA;
    double TB2 = tB;
    double thoras = (TB2-TA2)/ 3600;
    double velmed = distancia/thoras;
    if (velmed > velocidadeMaxima){
        return 1;
    }
    else{
        return 0;
    }
}


