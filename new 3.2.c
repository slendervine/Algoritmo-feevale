#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//var
int n1, n2;
int op; //Opçcao do aluno

//cod main

	int main(){
		//Coleta de dados:
		printf("Escreva um número: ");
		scanf("%d\n", &n1);
		printf("Escreva outro número: ");
		scanf("%d\n", &n2);
		
		//Se n1 for maior:
		if(n1>=n2){
			if(n1!=n2)
				printf("Valor maior: %d\n", n1);
				printf("Valor menor: %d\n", n2);
			else printf("Os valores são iguais");
		}
			
		//Se n2 for maior:
		if(n1<=n2){
			if(n1!=n2)
				printf("Valor maior: %d\n", n2);
				printf("Valor menor: %d\n", n1);
			else printf("Os valores são iguais");
		}

	getch();
	return 0;
	} 
	
//fim cod main
