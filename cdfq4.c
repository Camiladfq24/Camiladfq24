
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
//    subtração,multiplicação e divisão. Ao final, o 
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


//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
	int num1 = 0, num2 = 0;
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &num2);
	if ((num1+num2) > 10) {
		printf("%d + %d = %d\n", num1, num2, num1+num2);
	}
}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
	int num1 = 0, num2 = 0;
	printf("Digite um número inteiro: ");
	scanf("%d", &num1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &num2);
	if ((num1+num2) > 20) {
		printf("%d + %d + 8 = %d\n", num1, num2, num1+num2+8);
	} else {
		printf("%d + %d - 5 = %d\n", num1, num2, num1+num2-5);		
	}
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
	int num = 0;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	if (num % 3 == 0) {
		printf("%d é múltiplo de 3\n", num);
	} else {
		printf("%d NÃO é múltiplo de 3\n", num);		
	}
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {
	int num = 0;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	if (num % 5 == 0) {
		printf("%d é divisível por 5\n", num);
	} else {
		printf("%d NÃO é divisível por 5\n", num);		
	}	
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {
	int num = 0;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	if (num % 3 == 0 && num % 7 == 0) {
		printf("%d é múltiplo de 3 e 7\n", num);
	} else {
		printf("%d NÃO é múltiplo de 3 e 7\n", num);		
	}
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {

int salario, prestacao;
printf("Digite o salario bruto: ");
scanf("%d",&salario);
printf("Digite o valor da prestacao: ");
scanf("%d",&prestacao);
if (prestacao <= (salario * 0.3))
printf("Emprestimo consedido");
else
printf("Emprestimo nao consedido");
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {

int num;
printf("Digite o numero: ");
scanf("%d",&num);
if (num >= 20 && num <= 50)
printf("Numero entre 20 e 50");
else
printf("Numero menor que 20 ou maior que 50");

}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {

int num;
printf("digite um numero:");
scanf("%f", num);
if (num >20 );
printf ("numero maior que 20");
if (num == 20);
printf("numero igual a 20");
else 
printf("Numero menor que 20");
}
//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
int anonasc, anotual;
printf("Digite sua data de nascimento:");
scanf("%f", anonasc);
printf("Digite o ano atual:");
scanf("%f", anotual);
if (anonasc > 0 && anonasc <= anotual)
printf ("sua idade:" anonasc- anotual);
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {

int num1, num2, num3
print("digite um numero:")
Scanf("%f", num1);
printf("digite o segundo numero"):
 



}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {
	
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {

int idade;
printf("digite sua idade:");
scanf("%f", idade);
	
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de umaluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {
	
}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
	
}

//15. Um comerciante comprou umproduto e quer vendê-lo com umlucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.
void questao15() {
	
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {
	
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Umvendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {
	
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite umnúmero fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void questao18() {
	
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
	
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldomédio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {
	
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {
	
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo C, 8 kmpor litro.
void questao22() {
	
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal
void questao23() {

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dosmotoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe omês em que o emplacamento deve ser renovado.
void questao24() {
	
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {
	
}

int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;
	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 3:
			questao03();
			break;
		case 4:
			questao04();
			break;
		case 5:
			questao05();
			break;			
		case 10:
			questao10();
			break;
		default:
			printf("Opção inválida!");
	}
	

int main() {
    q6();
    return EXIT_SUCCESS;
}