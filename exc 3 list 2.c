#include <stdio.h>
int main(){

int n1;
float n2;
double n3;
char letra,  palavra [20];

printf(" Digite um numeiro inteiro: ");
scanf("%d",&n1);

printf(" Digite um numero real: ");
scanf("%f",&n2);

printf(" Digite um numero real com duas casas: ");
scanf("%lf",&n3);
fflush(stdin);

printf(" Digite uma letra: ");
scanf("%c",&letra);
fflush(stdin);

printf(" Digite uma palavra:");
scanf("%s",palavra);
fflush(stdin);


printf("\n Numeros reais: %d\n", n1);
printf(" Os numeros reais sao:\n %.1f\n %.2lf\n", n2,n3);
printf(" Letra: %c\n", letra);
printf(" Palavra: %s\n", palavra);



}
