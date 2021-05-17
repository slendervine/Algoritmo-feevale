#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//var
int n1, n2, n3, som, pro, dif1, dif2

//cod
	int main(){
		
		//Coletando dados:
		printf("Digite o primeiro número: ");
		scanf("%d", n1);
		
		printf("Digite o segundo número: " );
		scanf("%d", n2);
		
		//Denominando as variáveis:
		som=(n1+n2);
		pro=(n1*n2);
		dif1=(n1-n2);
		dif2=(n2-n1);
		
		//Apontando resultados:
		printf("A soma dos números que me deu é: %d\n", som);
		printf("O produto entre eles é: %d\n", pro);
		printf("E as diferenças entre eles são: %d\ ", dif1, " ou %d\n", dif2);

	getch()
	return 0
	}
//fimcod
