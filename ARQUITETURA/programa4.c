#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

main(){
	int val1; 
	int val2;
	int i;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Entre com o primeiro n�mero: ");
	scanf("%d",&val1); //obrigat�rio para receber variável string
	
	printf("Entre com o segundoo n�mero: ");
	scanf("%d",&val2);
	
	//system("cls");
	
	for (i=val1;i<=val2;i++){
		if(i%2==1){
			printf("Este n�mero � �mpar: %d\n\n", i );	
		}
	}
}
	
