#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//var
float n1, n2, n3;
float media;

//cod main

	int main(){
		//Coleta de dados:
		printf("Escreva sua primeira nota: ");
		scanf("%f\n", &n1);
		printf("Escreva sua segunda nota: ");
		scanf("%f\n", &n2);
		printf("Escreva sua terceira nota: ");
		scanf("%f\n", &n3);
		
		//Calculo e apresentacao de media:
		if(n1>=0 && n1<=10 && n2>=0 && n2<=10 && n3>=0 && n3<=10);
		media=((n1*2)+(n2*3)+(n3*5))/2;
			if(media >=7);
			printf("Você foi aprovado, sua média foi: %2.f", media);
			else
			printf("Sua nota foi %2.f portanto, você foi reprovado", media);
		else
		printf("Os valores que você digitou não fazem parte de nossas notas");
		

	getch();
	return 0;
	} 
	
//fim cod main
