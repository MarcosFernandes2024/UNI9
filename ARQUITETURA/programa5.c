#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

main(){
	int val1 = 36; 
	int val2;
	int chance = 3;
		setlocale(LC_ALL,"Portuguese");
	
	for (chance==3;chance>=0;chance--){
		printf("Entre com o seu palpite de 0 a 50: \n\n");
		printf("Restam-lhe %d \n\n",chance);		
		if(chance==0){
			printf("VOC� PERDEU!!! HAHAHAHA");
		}else if(chance==1){
			printf("DICA: O valor procurado � a ra�z quadrada de 1296\n");
			printf("Qual o n�mero? ");
		}
		scanf("%d",&val2);
		
		if(val2==val1){
			printf("PARAB�NS!!!");
			break;
		}else{
			printf("ERROU!!! TENTE NOVAMENTE\n\n");
		}		
	}
}
