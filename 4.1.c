#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Proponha um programa em C que lê uma variável n, inteira e maior que zero, que representa o número de linhas da figura que segue o padrão a seguir:

n= 5
*****
*****
*****
*****
***** */

//var
int n, i, p;


//cod main

	int main(void){
		do{
			printf("Informe o número de linhas:");
			scanf("%d\n", &n);
		
		}while(n<0);
			for(i=1; i<=n; i++){
				for(p=1; p<=i; p++){
					printf("#");
				}
				printf("\n");
			}
	} 
	
//fim cod main

