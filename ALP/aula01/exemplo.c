#include<stdio.h>

int main(){
	char nome[20];
	float salario, salarioantigo;
	int idade;
	
	printf("Digite seu nome\n");
	scanf("%s", &nome);
	printf("Digite seu salário\n");
	scanf("%f",&salario);
	printf("Digite sua idade\n");
	scanf("%d", &idade);
	
	int nasceu = 2023-idade;
	
	printf("Funcionario %s tem salário de %.2f e nasceu em %d\n\n", nome,salario,nasceu);
	
	if(idade < 18){
		salarioantigo = salario;
		salario = salario*1.05;
	}else{
		salarioantigo = salario;
		salario = salario*1.20;
	}
	printf("%s o seu salario passou de %.2f para %.2f", nome, salarioantigo, salario);
}
