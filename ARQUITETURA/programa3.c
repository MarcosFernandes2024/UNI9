#include <stdio.h> 
#include <stdlib.h>

main(){
	int RA; 
	int senha;
	
	printf("Digite o RA: ");
	scanf("%d",&RA); //obrigat�rio para receber vari�vel int
	printf("Digite a SENHA: ");
	scanf("%d",&senha); //obrigat�rio para receber vari�vel int
	
	if(RA==123 && senha==456){
		printf("ACESSO PERMITIDO");
	}
	else{
		printf("ACESSO NEGADO");		
	}
}
