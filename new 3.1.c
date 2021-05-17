#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//var
float n1, n2;
int op; //Opçcao do aluno

//cod main

	int main(){
		//Coleta de dados:
		printf("Escreva um número: ");
		scanf("%d\n", &n1);
		printf("Escreva outro número: ");
		scanf("%d\n", &n2);
		
		//Opcoes:
		printf("1. Soma");
		printf("2. Produto");
		printf("3. Diferenca");
		printf("4. Divisao");
		
		//Coleta de opcao:
		printf("Escolha uma opção: ");
		scanf("%d\n", &op);
		
		//Executar opcao:
		if(op==1)
			printf("%.2f", n1+n2);
		if(op==2)
			printf("%.2f", n1*n2);
		if(op==3)
			printf("%.2f", n1-n2);
		
		if(op==4){
			if (n2==0)
				printf("Divisão por 0 não existe!");
			else printf("%.2f", n1/n2);
		}
		
	getch();
	return 0;
	} 
	
//fim cod main
