#include <stdio.h> 
#include <stdlib.h>

main(){
	int RA; 
	int senha;
	
	printf("Digite o RA: ");
	scanf("%d",&RA); //obrigatório para receber variável int
	printf("Digite a SENHA: ");
	scanf("%d",&senha); //obrigatório para receber variável int
	
	if(RA==123 && senha==456){
		printf("ACESSO PERMITIDO");
	}
	else{
		printf("ACESSO NEGADO");		
	}
}
