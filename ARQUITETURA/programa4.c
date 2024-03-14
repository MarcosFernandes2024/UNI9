#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

main(){
	int val1; 
	int val2;
	int i;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Entre com o primeiro número: ");
	scanf("%d",&val1); //obrigatório para receber variÃ¡vel string
	
	printf("Entre com o segundoo número: ");
	scanf("%d",&val2);
	
	//system("cls");
	
	for (i=val1;i<=val2;i++){
		if(i%2==1){
			printf("Este número é ímpar: %d\n\n", i );	
		}
	}
}
	
