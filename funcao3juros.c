#include <stdio.h>

int juros(double c, double m, double t){

    double juros = c * m * t;

    return juros;



}

int main(){

    double c, m, t;

    scanf("%lf%lf%lf", &c, &m, &t);

    printf("%d", juros(c, m, t));


    return 0;
}
