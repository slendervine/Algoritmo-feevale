/* Proponha um programa em C que leia um número inteiro positivo ne em seguida exiba n linhas do chamado Triângulo de Floyd, conforme exemplificado abaixo:

n = 3
1
23
456 */



#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n, x, y;
    int num = 0;

    do{
    printf("Digite um numero");               //Número de linhas;
    scanf("%d", &n);
    } while(n<=0);

    for(x=1, x<=n, x++){

        for(y=1, y=<0, y++){
            num++
            printf("%d", num)
            };
        printf("\n")
    }
}
