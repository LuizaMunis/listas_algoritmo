#include <stdio.h>
#include <math.h>
int main(){

const double pi = 3.14159;
float area, volume, R;

printf("Digite o valor do raio:");
scanf("%f", &R);

area = 4 * pi * pow(R,2);
volume = (4/3.0)* pi * pow(R,3);

printf("Area:%.2f", area);
printf ("volume: %.2f", volume);

}