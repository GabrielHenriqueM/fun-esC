#include <stdio.h>

double soma(double a, double b, double c){

    double maior, menor;

    if(a > b && a > c){

        maior = a;

    }if(b > a && b > c){

        maior = b;

    }if(c > a && c > b){

        maior = c;

    }



    if(a < b && a < c){

        menor = a;

    }if(b < a && b < c){

        menor = b;

    }if(c < a && c < b){

        menor = c;

    }




    return maior + menor;

}

int main(){

   double a, b, c, maior, menors;

   scanf("%lf %lf %lf", &a, &b, &c);

   printf("%.2lf", soma(a, b, c));

    return 0;
}
