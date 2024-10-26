
#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("João Paulo!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
   printf("30 * 27 = %d", 30 * 27); 
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3() {
    float media = (5+8+12)/3.0
    printf("media de 5, 8, 12 é igual a %f\n", media);
} 

//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
int num = 0 
printf("Digite um valor numérico inteiro: ");
scanf("%d", &num);
print("O valor digitando foi %d \n");
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5() {
int num = 0
printf("digite dois numeros numeros reais: ");
scanf("%d", &num);
printf("os dois numeros digitados foram %d \n");
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6() {
Float n;
pritnf("digite um numero: ");
scanf("%f",&n);
printf("antecessor: %f e sucessor: %f", n-1, n+1);

}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7() {
float  nom[100], end[100], tel[100];
printf("digite seu nome: ");
scanf(" %s", nom);
printf("digite seu endereço: ");
scanf(" %s", end);
printf("informe seu telefone:");
scanf(" %s" tel);
prinf("%s \n %s \n %s \n",nom ,end, tel);
}
//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8() {
int subtracao, num1, num2;
printf("digite o priemeiro numero: ";
scanf("%d" , &num1);
printf("digite o segundo numero: ");
scanf("%d" , &num2);
subtracao = num1 - num2;
print("resultado sa subtracao: %d", subtracao);
}
//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q9() {
float n, resultado;
printf("digite um numero: ");
scanf("%f", &n);
resultado = n/4
printf("resultado: %f", resultado);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
Void q10() {
float media, n1, n2, n3
printf("digite o numero 1: ");
scanf("%f", &n1);
prinf("digite o numero 2: ")
scanf("%f", &n2);
pritnf("digite numero 3: ")
media = (n1+n2+n3) / 3
printf("media: %f", media);
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

void q11() {
float n1, n2, soma, subtração, multi, divisao
prinf("digite o numero 1");
scanf("%f", &n1);
printf("Digite numero 2");
scanf("%f" &n2);
soma = n1 + n2;
prinf("soma: %f", soma);
subtracao = n1 - n2;
scanf("subtracao: %f", subtracao);
multi: n1 * n2;
scanf("multi: %f", multiplicação);
divisao = n1 / n2;
scanf("divisao: %f", divisao)
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12() {
float num, calculo
printf("digite um numero: ");
scanf("%f", num):
calculo = num * num 
scanf("calculo: %f", calculo):
}
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13() {
float saldo, saldonv
printf("informe o seu saldo bancario");
scanf("%f", saldo);
saldonv = saldo + saldo * 0,2
scanf("saldonv: %f", saldo novo);
}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void q14() {
float base, altura, perimetro, area;
printf("digite a base:");
scanf("%f", base);
prinf("digite a altura: ");
scanf("%f" altura);
perimetro = base * 2 + altura * 2;
scanf("perimetro: %f", perimetro);
area = base * altrua;
scanf("area: %f", area);
}
//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15() {
float vlrprod, porcen, vlrnv;

pordesc = vlrprod - (descdesj * (porcen / 100));




}




//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q6();
    return EXIT_SUCCESS;
}