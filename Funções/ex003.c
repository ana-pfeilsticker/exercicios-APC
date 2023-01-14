
long double fatorial (num){
    long double i = num;
    long double fat = 1;
    if (i==0){
        num = 1;
    }
    while(i > 1){
        fat = fat* (i);
        i --;
        
    }
    return fat;

}

double exp_natural ( int x , int n){

    double resultado = 0;
    double numerador = x;
    int j = 0;

    while (n >=0){
        numerador = 1;
        j = 0;
        while (j<n){
            numerador = numerador *x;
            j++;

        }
        resultado = resultado + (numerador / fatorial(n));
        n--;
        }
    


    return resultado;
}