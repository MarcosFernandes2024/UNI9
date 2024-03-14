#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

main(){
	char nome[20]; 
	int idade;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o nome: ");
	scanf(" %[^\n]",&nome); //obrigatório para receber variável string
	
	printf("Digite a idade: ");
	scanf("%d",&idade); //obrigatório para receber variável int
	
	system("cls");
	printf("Dados cadastrados:\n\n");
	printf("Nome: %s\n",nome);
	printf("Idade: %d\n",idade);
	
	if(idade>=18){
		printf("Você é maior de idade");
	}
	else if(idade<=0){
		printf("ERRO!!!!! IDADE INVÁLIDA");
	}
	else{
		printf("Você é menor de idade");		
	}
}

