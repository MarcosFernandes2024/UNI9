#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

main(){
	char nome[20]; 
	int idade;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o nome: ");
	scanf(" %[^\n]",&nome); //obrigat�rio para receber vari�vel string
	
	printf("Digite a idade: ");
	scanf("%d",&idade); //obrigat�rio para receber vari�vel int
	
	system("cls");
	printf("Dados cadastrados:\n\n");
	printf("Nome: %s\n",nome);
	printf("Idade: %d\n",idade);
	
	if(idade>=18){
		printf("Voc� � maior de idade");
	}
	else if(idade<=0){
		printf("ERRO!!!!! IDADE INV�LIDA");
	}
	else{
		printf("Voc� � menor de idade");		
	}
}

