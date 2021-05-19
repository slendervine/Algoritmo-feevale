#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//var
int idade;


//cod main

	int main(){
		//Coleta de dados:
		printf("Escreva a idade do atleta: ");
		scanf("%d\n", &idade);
		
		
		//Calculo e apresentacao das idades e jogos:
		if(idade>=6 || idade<=18);
			switch(idade){
				case idade>=6 && idade<=8: printf("Infantil A");
					break;
				case idade>=9 && idade<=12: printf("Infantil B");
					break;
				case idade=13 || idade=14: printf("Juvenil A");
					break;
				case idade>=15 && idade<=18: printf("Juvenil B");
					break;
		else
		printf("Idade não permitida para os jogos");

	getch();
	return 0;
	} 
	
//fim cod main
