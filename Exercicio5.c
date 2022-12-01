#include <stdio.h>

double sn(double n, double a, double an){




    return n*(a + an) / 2;
}


int main(){

    double n, a, an;

    scanf("%lf %lf %lf", &n, &a, &an);

    printf("%.2lf", sn(n, a, an));

    return 0;
}
