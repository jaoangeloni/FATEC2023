#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nome[20], produto[20];
	float valor, total;
	int qtd, x;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite o nome produto: ");
	scanf("%s", &produto);
	printf("Digite a quantidade: ");
	scanf("%d", &qtd);
	printf("Digite o preço do produto: ");
	scanf("%f", &valor);
	printf("Em quantas vezes vai pagar?: ");
	scanf("%d", &x);
	
	valor = valor * qtd;
	
	if(x == 1){
		valor = valor - valor * 0.1;
		printf("%s, você vai comprar %d %s, parcelado em %d e o total é R$%.2f",nome, qtd, produto, x, valor);
	}else if(x >= 2 && x <=5){
		printf("%s, você vai comprar %d %s, parcelado em %d e o total é R$%.2f",nome, qtd, produto, x, valor);
	}else if(x >= 6 && x <=10){
		valor = valor + valor * 0.8;
		printf("%s, você vai comprar %d %s, parcelado em %d e o total é R$%.2f",nome, qtd, produto, x, valor);
	}else{
		valor = valor + valor * 1.1 + 283;
		printf("%s, você vai comprar %d %s, parcelado em %d e o total é R$%.2f",nome, qtd, produto, x, valor);
	}
}
