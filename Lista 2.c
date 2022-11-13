//exercicio 1

#include<stdio.h>
char main(){
char hello;
    printf("Hello world!");
    scanf("%c,& hello");
}

//Exercicio 2

#include <stdio.h>
char main (){
    char texto;

    printf(" Caderno de poesias e um belo lugar.\n Tantas coisas lindas que eu gostaria de falar. \n Eu falo em forma de versos para todos poderem escutar.\n Agora voce ja sabe porque os poetas passam os dias escrevendo em seus cadernos de poesias.\n");
    scanf("%c", &texto);
}

// Exercicio 3

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


// Exercicio 4

#include<stdio.h>
int main(){
    int A, B, valor;

    printf("Digite dois numeros:");
    scanf("%d%d",&A,&B);

valor = A + B, valor;

printf("Valor de %d + %d = %d\n", A,B, valor);
}


// Exercicio 5

#include<stdio.h>
int main(){
    int A, B, valor;

    printf("Digite dois numeros:");
    scanf("%d%d",&A,&B);

printf("valor de %d", A+B);
}


//Exercicio 6

#include<stdio.h>

int main(){
  
const int A = 5;
const int B =6;
int valor;

valor = A + B, valor;

printf("Valor de %d + %d = %d\n", A,B, valor);
}

// Exercicio 7

#include <stdio.h>
int main (){

  int n1, n2, prod;

    printf("Digite dois numeros:");
    scanf("%d%d",&n1,&n2);

printf("Prod = %d\n",n1*n2, prod);

}

// Exercicio 8

#include <stdio.h>
int main(){
int A,B,C,D;
int diferenca;

printf("Digite quatro numeros inteiros:");
scanf("%d%d%d%d", &A,&B,&C,&D );

diferenca = (A*B)-(C*D), diferenca;

printf("%d*%d - %d*%d\n",A,B,C,D,diferenca);
printf("%d", diferenca);

}

// Exercio 9

#include <stdio.h>
int main (){

char nome[20];
float salario, vendas;
float calc, total;

printf("Digite o nome do funcionario:");
scanf("%s", nome);

printf("Digite o salario do funcionario:");
scanf("%f", &salario);

printf("Digite o valor de vendas do funcionario:");
scanf("%f", &vendas);

calc = (vendas*15)/100, calc;
total = salario + calc, total;


printf("\nNome: %s\n", nome);
printf("Salario fixo : %.2f\n", salario);
printf("Vendas: %.2f\n", vendas);
printf("Valor a receber = %.2f", total);

}

//Exercicio 10

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


//Exercicio 11

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

