#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Proponha um programa em C que l� uma vari�vel n, inteira e maior que zero, que representa o n�mero de linhas da figura que segue o padr�o a seguir:

n= 5
*****
****
***
**
* */

//var
int n, i, p;


//cod main

	int main(void){
		do{
			printf("Informe o n�mero de linhas:");
			scanf("%d\n", &n);
		
		}while(n<0);
			for(i=n; i=1; i--){
				for(p==n; p==i; p++){
					printf("#");
				}
				printf("\n");
			}
	} 
	
//fim cod main

