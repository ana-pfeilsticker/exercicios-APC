#include <stdio.h>
#include <math.h>
int main(){
    int gm;
    int cg = 0;
    unsigned long long int n;
    unsigned long long int linhatemporal;
    unsigned long long int t;

    scanf("%llu%d", &linhatemporal, &gm);
    while (cg < gm){

        if (linhatemporal%2 == 0){
            n = sqrt(linhatemporal);
            t = ((2*n) - 1)/2;
            linhatemporal = t*t;
            printf("%llu\n", linhatemporal);
        }
        else{
        if (linhatemporal%2==1){
            n = sqrt(linhatemporal);
            t = (2*n) - 1;
            linhatemporal = t*t;
            printf("%llu\n", linhatemporal);
        }}
        cg ++;
        
    }








    return 0;
}