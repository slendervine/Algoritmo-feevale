#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//var
int n1, n2, n3;
int maior, menor;

//cod main

	int main(){
		//Coleta de dados:
		printf("Escreva um número: ");
		scanf("%d\n", &n1);
		printf("Escreva outro número: ");
		scanf("%d\n", &n2);
		printf("Escreva outro número: ");
		scanf("%d\n", &n3);
		
		//Denominando o maior:
		if(n1>n2>=n3)
			n1=maior;
		else print("Pelo menos dois números que você digitou, são iguais");
		
		if(n2>n1>=n3)
			n2=maior;
		else print("Pelo menos dois números que você digitou, são iguais");
		
		if(n3>n1>=n2)
			n3=maior;
		else print("Pelo menos dois números que você digitou, são iguais");
		
		//Denominando o menor:
		if(n1<n2<=n3)
			n1=menor;
		else print("Pelo menos dois números que você digitou, são iguais");
		
		if(n2<n1<=n3)
			n2=menor;
		else print("Pelo menos dois números que você digitou, são iguais");
		
		if(n3<n1<=n2)
			n3=menor;
		else print("Pelo menos dois números que você digitou, são iguais");
		
		//Soma:
		printf("Soma: %d\n", n1+n2+n3);
		
		//Produto:
		printf("Produto: %d\n", n1*n2*n3);
		
		//Maior:
		printf("Maior número: %d\n", maior);
				
		//Menor:
		printf("Menor número: %d\n", menor);

	getch();
	return 0;
	} 
	
//fim cod main
