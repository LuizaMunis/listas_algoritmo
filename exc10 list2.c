#include <stdio.h>
#include <math.h>
int main(){

double x1, x2, y1, y2, distancia;

printf ("Digite os dois valores do primeiro ponto:");
scanf("%lf %lf", &x1,&y1);

printf ("Digite os dois valores do segundo ponto:");
scanf("%lf %lf", &x2,&y2);

distancia = sqrt(pow(x2 - x1,2)+ pow(y2-y1,2));

printf("%.4lf", distancia);
}
