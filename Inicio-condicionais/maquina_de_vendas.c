#include <stdio.h>

int main(){

    int p;
    int v;
    int t;
    int n500, n100, n50, n10, n5, n1;
    scanf("%d" "%d", &p, &v);
    t = v - p;
    n500 = t/500;
    n100 = (t-(n500*500))/100;
    n50 = (t-(n500*500 + n100*100))/50;
    n10 = (t-(n500*500 + n100*100 + n50*50))/10;
    n5 = (t-(n500*500 + n100*100 + n50*50 + n10*10))/5;
    n1 = (t-(n500*500 + n100*100 + n50*50 + n10*10 +n5*5))/1;
    printf("%d\n",n500);
    printf("%d\n",n100);
    printf("%d\n",n50);
    printf("%d\n",n10);
    printf("%d\n",n5);
    printf("%d\n",n1);
    return 0;
}