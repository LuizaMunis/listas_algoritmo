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